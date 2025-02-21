//Muhammad Rafly Yahya Ramadhan
//123140148
//RE

#include <iostream>
using namespace std;

// Struktur Node untuk double circular linked list
struct Node {
    int value;         // Nilai yang disimpan di node
    Node* next;        // Pointer ke node berikutnya
    Node* prev;        // Pointer ke node sebelumnya
    bool visited;      // Flag untuk menandai apakah node telah diperiksa (digunakan untuk pencarian duplikat)

    // Constructor untuk Node
    Node(int val) {
        value = val;
        next = nullptr;
        prev = nullptr;
        visited = false;
    }
};

// Menambahkan node pertama ke list (jika list kosong)
Node* addInitial(Node* tail, int value) {
    if (tail != nullptr) { // Jika list tidak kosong, tidak perlu menambahkan
        return tail;
    }
    Node* newNode = new Node(value); // Buat node baru
    newNode->next = newNode;         // Karena ini circular list, node menunjuk ke dirinya sendiri
    newNode->prev = newNode;         // Node juga menunjuk dirinya sendiri sebagai node sebelumnya
    tail = newNode;                  // Tail menunjuk ke node baru
    return tail;
}

// Mereset semua flag `visited` pada setiap node di circular linked list
void resetVisitedFlags(Node* tail) {
    if (tail == nullptr) return; // Jika list kosong, langsung keluar

    Node* current = tail->next;  // Mulai dari head
    do {
        current->visited = false; // Setiap node di-reset visited-nya
        current = current->next;  // Pindah ke node berikutnya
    } while (current != tail->next); // Ulangi hingga kembali ke head
}

// Menambahkan node di awal list
Node* addAtStart(Node* tail, int value) {
    Node* newNode = new Node(value); // Buat node baru
    if (tail == nullptr) { // Jika list kosong
        newNode->next = newNode; // Node menunjuk ke dirinya sendiri
        newNode->prev = newNode; // Node menunjuk dirinya sendiri
        return newNode;
    }
    Node* head = tail->next;  // Ambil node head
    newNode->next = head;     // Node baru menunjuk ke head lama
    newNode->prev = tail;     // Node baru menunjuk ke tail
    head->prev = newNode;     // Head lama menunjuk ke node baru
    tail->next = newNode;     // Tail menunjuk ke node baru
    resetVisitedFlags(tail);  // Reset flag visited
    return tail;              // Kembalikan tail
}

// Menambahkan node di akhir list
Node* addAtEnd(Node* tail, int value) {
    Node* newNode = new Node(value); // Buat node baru
    if (tail == nullptr) { // Jika list kosong
        newNode->next = newNode; // Node menunjuk ke dirinya sendiri
        newNode->prev = newNode; // Node menunjuk dirinya sendiri
        return newNode;
    }
    Node* head = tail->next;  // Ambil node head
    newNode->next = head;     // Node baru menunjuk ke head
    newNode->prev = tail;     // Node baru menunjuk ke tail
    tail->next = newNode;     // Node lama terakhir menunjuk ke node baru
    head->prev = newNode;     // Head menunjuk ke node baru
    return newNode;           // Tail menjadi node baru
}

// Mencari dan mencetak duplikat nilai di list
void findDuplicates(Node* tail) {
    if (tail == nullptr) { // Jika list kosong
        cout << "Tidak ada data." << endl;
        return;
    }

    Node* current = tail->next; // Mulai dari head
    bool duplicatesFound = false; // Menandai apakah ada duplikat

    do {
        if (!current->visited) { // Jika node belum diperiksa
            Node* checker = current->next; // Mulai membandingkan dari node berikutnya
            int count = 1; // Hitung kemunculan nilai

            while (checker != tail->next) { // Loop untuk membandingkan seluruh node
                if (checker->value == current->value && !checker->visited) {
                    count++;               // Jika nilai sama, tambahkan hitungan
                    checker->visited = true; // Tandai node duplikat sebagai diperiksa
                }
                checker = checker->next; // Pindah ke node berikutnya
            }

            if (count > 1) { // Jika ada duplikat
                cout << current->value << " muncul " << count << " kali." << endl;
                duplicatesFound = true;
            }

            current->visited = true; // Tandai node ini sebagai diperiksa
        }

        current = current->next; // Pindah ke node berikutnya
    } while (current != tail->next); // Ulangi hingga kembali ke head

    if (!duplicatesFound) { // Jika tidak ada duplikat
        cout << "Tidak ada duplikat." << endl;
    }
}

// Menghapus semua node duplikat di list
void deleteDuplicates(Node*& tail) {
    if (!tail) return; // Jika list kosong, langsung keluar

    Node* current = tail->next; // Mulai dari head
    do {
        Node* runner = current->next; // Untuk mencari duplikat setelah current
        while (runner != current) { // Periksa semua node setelah current
            if (runner->value == current->value) {
                Node* duplicate = runner;        // Simpan node duplikat
                runner->prev->next = runner->next; // Lewati node duplikat
                runner->next->prev = runner->prev;

                if (duplicate == tail) {          // Jika node duplikat adalah tail
                    tail = duplicate->prev;       // Update tail
                }
                if (duplicate == tail->next) {    // Jika node duplikat adalah head
                    tail->next = duplicate->next; // Update head
                }
                runner = runner->next; // Pindah ke node berikutnya
                delete duplicate;      // Hapus node duplikat
            } else {
                runner = runner->next; // Pindah ke node berikutnya
            }
        }
        current = current->next; // Pindah ke node berikutnya
    } while (current != tail->next); // Ulangi hingga kembali ke head
}

// Menampilkan semua nilai di list
void displayList(Node* tail) {
    if (tail == nullptr) return; // Jika list kosong, langsung keluar

    Node* head = tail->next; // Mulai dari head
    do {
        cout << head->value << " "; // Cetak nilai
        head = head->next;         // Pindah ke node berikutnya
    } while (head != tail->next);  // Ulangi hingga kembali ke head
    cout << endl;
}

// Fungsi utama
int main() {
    Node* tail = nullptr; // Awalnya list kosong
    int count, choice, inputValue;

    do {
        // Menampilkan menu
        cout << "Menu:" << endl;
        cout << "1. Insert Empty" << endl;
        cout << "2. Insert First" << endl;
        cout << "3. Insert Last" << endl;
        cout << "4. Cari Duplikat" << endl;
        cout << "5. Hapus Duplikat" << endl;
        cout << "6. Tampilkan Data" << endl;
        cout << "0. Keluar" << endl;

        cin >> choice; // Pilih menu

        switch (choice) {
            case 1: // Tambah node pertama
                cout << "Masukkan nilai: ";
                cin >> inputValue;
                tail = addInitial(tail, inputValue);
                break;

            case 2: // Tambah node di awal
                cout << "Jumlah data yang ingin dimasukkan: ";
                cin >> count;
                for (int i = 0; i < count; i++) {
                    cout << "Masukkan nilai: ";
                    cin >> inputValue;
                    tail = addAtStart(tail, inputValue);
                }
                break;

            case 3: // Tambah node di akhir
                cout << "Jumlah data yang ingin dimasukkan: ";
                cin >> count;
                for (int i = 0; i < count; i++) {
                    cout << "Masukkan nilai: ";
                    cin >> inputValue;
                    tail = addAtEnd(tail, inputValue);
                }
                break;

            case 4: // Cari duplikat
                findDuplicates(tail);
                cout << endl;
                break;

            case 5: // Hapus duplikat
                deleteDuplicates(tail);
                cout << "Duplikat dihapus!" << endl;
                break;

            case 6: // Tampilkan data
                cout << "Data saat ini: ";
                displayList(tail);
                cout << endl;
                break;
        }
    } while (choice != 0); // Ulangi hingga pilihan 0 (keluar)

    return 0;
}

