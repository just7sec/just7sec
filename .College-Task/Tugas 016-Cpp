//Muhammad Rafly Yahya Ramadhan
//123140148
//RE

#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
    bool visited; 
  
    Node(int val) {
        value = val;
        next = nullptr;
        visited = false; 
    }
};

Node* addInitial(Node* tail, int value) {
    if (tail != nullptr) {
        return tail;
    }
    Node* newNode = new Node(value);
    newNode->next = newNode;
    tail = newNode;
    return tail;
}

void resetVisitedFlags(Node* tail) {
    if (tail == nullptr) return;

    Node* current = tail->next;
    do {
        current->visited = false;
        current = current->next;
    } while (current != tail->next);
}

Node* addAtStart(Node* tail, int value) {
    Node* newNode = new Node(value);
    if (tail == nullptr) {
        newNode->next = newNode;
        return newNode;
    }
    newNode->next = tail->next;
    tail->next = newNode;
    resetVisitedFlags(tail);
    return tail;
}

Node* addAtEnd(Node* tail, int value) {
    Node* newNode = new Node(value);

    if (tail == nullptr) {
        tail = newNode;
        newNode->next = newNode;
    } else {
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    }
    resetVisitedFlags(tail);
    return tail;
}

void findDuplicates(Node* tail) {
    if (tail == nullptr) {
        cout << "Tidak ada data." << endl;
        return;
    }

    Node* current = tail->next;
    bool duplicatesFound = false;

    do {
        if (!current->visited) {
            Node* checker = current->next;
            int count = 1;

            while (checker != tail->next) {
                if (checker->value == current->value && !checker->visited) {
                    count++;
                    checker->visited = true;
                }
                checker = checker->next;
            }

            if (count > 1) {
                cout << current->value << " muncul " << count << " kali." << endl;
                duplicatesFound = true;
            }

            current->visited = true;
        }

        current = current->next;
    } while (current != tail->next);

    if (!duplicatesFound) {
        cout << "Tidak ada duplikat." << endl;
    }
}

void deleteDuplicates(Node* head) {
    if (!head) return;

    Node* current = head;
    do {
        Node* runner = current;
        while (runner->next != head) {
            if (runner->next->value == current->value) {
                Node* duplicate = runner->next;
                runner->next = duplicate->next;

                if (duplicate == head) {
                    head = duplicate->next;
                }
                delete duplicate;
            } else {
                runner = runner->next;
            }
        }
        current = current->next;
    } while (current != head);
}

void displayList(Node* tail) {
    if (tail == nullptr) return;

    Node* head = tail->next;
    while (true) {
        cout << head->value << " ";
        head = head->next;
        if (head == tail->next) break;
    }
    cout << endl;
}

int main() {
    Node* tail = nullptr;
    int count, choice, inputValue;

    do {
        cout << "Menu:" << endl;
        cout << "1. Tambah Awal" << endl;
        cout << "2. Tambah Pertama" << endl;
        cout << "3. Tambah Terakhir" << endl;
        cout << "4. Cari Duplikat" << endl;
        cout << "5. Hapus Duplikat" << endl;
        cout << "6. Tampilkan Data" << endl;
        cout << "0. Keluar" << endl;

        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan nilai: ";
                cin >> inputValue;
                tail = addInitial(tail, inputValue);
                break;

            case 2:
                cout << "Jumlah data yang ingin dimasukkan: ";
                cin >> count;
                for (int i = 0; i < count; i++) {
                    cout << "Masukkan nilai: ";
                    cin >> inputValue;
                    tail = addAtStart(tail, inputValue);
                }
                break;

            case 3:
                cout << "Jumlah data yang ingin dimasukkan: ";
                cin >> count;
                for (int i = 0; i < count; i++) {
                    cout << "Masukkan nilai: ";
                    cin >> inputValue;
                    tail = addAtEnd(tail, inputValue);
                }
                break;

            case 4:
                findDuplicates(tail);
                cout << endl;
                break;

            case 5:
                deleteDuplicates(tail);
                cout << "Duplikat dihapus!" << endl;
                break;

            case 6:
                cout << "Data saat ini: ";
                displayList(tail);
                cout << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}
