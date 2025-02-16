#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//Deklarasi Sub-program yang akan digunakan
int userAction(int input);
int computerAction();
int compareActions(int user, int comp);

int main() {
   int user, comp, result;

   cout << "Pilih aksi sesuai angka : \n";
   cout << "1. Batu\n";
   cout << "2. Gunting\n";
   cout << "3. Kertas\n";
   cout << "Pilihlah aksi anda : ";
   user = userAction(1); // Inisialisai variabel user untuk memanggil sub-program tersebut untuk mendapatkan aksi dari pengguna

   comp = computerAction(); // Inisisalisasi variabel comp untuk mendapatkan nilai random dari komputer menggunakan rand()

   result = compareActions(user, comp); // Inisialisasi variabel result untuk membandingkan aksi pengguna dan komputer untuk menyatakan hasil
   
   cout << "Komputer : "; //Membuat kondisi hasil aksi untuk komputer
   if (comp == 1) {
       cout << "Batu";
   } else if (comp == 2) {
       cout << "Gunting";
   } else if (comp == 3) {
       cout << "Kertas";
   }

   cout << "\nUser : "; //Membuat kondisi hasil aksi untuk pengguna
   if (user == 1) {
       cout << "Batu";
   } else if (user == 2) {
       cout << "Gunting";
   } else if (user == 3) {
       cout << "Kertas";
   }
 
   if (result == 1) { //Membuat kondisi hasil dari aksi pengguna dan komputer
       cout << "\nAnda menang";
   } else if (result == 2) {
       cout << "\nKomputer menang";
   } else if (result == 0) {
       cout << "\nHasil Seri";
   }

   return 0;
}

int userAction(int input) {
   int action;
   cin >> action;

   // Validasi input dari pengguna jika memilih di luar dari pilihan yang tersedia
   while (action < 1 || action > 3) {
       cout << "Input salah. Pilihlah aksi anda : ";
       cin >> action;
   }

   return action;
}

int computerAction() {
   int compAction = rand() % 3 + 1; //Deklarasi dan inisialisasi untuk membuat nilai random pada aksi komputer dengan menggunakan rand()
   return compAction;
}

int compareActions(int user, int comp) { //untuk memproses hasil aksi dari pengguna dan komputer sebelum direturn pada main program 
   if (user == comp) {
       return 0; // Seri
   } else if ((user - comp == 1) || (user - comp == -2)) {
       return 1; // Pengguna menang
   } else {
       return 2; // Komputer menang
   }
}
