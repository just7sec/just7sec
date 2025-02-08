#include <iostream>
using namespace std;

// Sub-program untuk konversi suhu untuk Fahrenheit 
double Fahrenheit(double degrees, string source) {
   if (source == "Celcius") {
       return (9.0/5)*degrees + 32;
   } else if (source == "Reamur") {
       return (5.0/4)*degrees + 32;
   } else if (source == "Kelvin") {
       return (9.0/5)*(degrees - 273.15) + 32;
   }
}

// Sub-program untuk konversi suhu untuk Reamur
double Reamur(double degrees, string source) {
   if (source == "Celcius") {
       return 4.0/5*degrees;
   } else if (source == "Fahrenheit") {
       return 4.0/5*(degrees - 32);
   } else if (source == "Kelvin") {
       return 4.0/5*(degrees - 273.15);
   }
}

// Sub-program untuk konversi suhu untuk Kelvin
double Kelvin(double degrees, string source) {
   if (source == "Celcius") {
       return degrees + 273.15;
   } else if (source == "Fahrenheit") {
       return (5.0/9)*(degrees - 32) + 273.15;
   } else if (source == "Reamur") {
       return 5.0/4*degrees + 273.15;
   }
}

int main() {
   int choice;
   double degrees;

   cout << "Pilih suhu awal sesuai angka:\n"
        << "1. Celcius\n"
        << "2. Fahrenheit\n"
        << "3. Reamur\n"
        << "4. Kelvin\n"
        << "Pilihlah suhu awal : ";
   cin >> choice;

   cout << "Masukkan derajat suhu : ";
   cin >> degrees;

   switch(choice) { //Menampilkan kondisi dengan 4 kasus yang berbeda sesuai dengan suhu awal
       case 1:
           cout << degrees << " derajat Celcius sama dengan:\n"
                << Fahrenheit(degrees, "Celcius") << " derajat Fahrenheit\n"
                << Reamur(degrees, "Celcius") << " derajat Reamur\n"
                << Kelvin(degrees, "Celcius") << " derajat Kelvin\n";
           break;
       case 2:
           cout << degrees << " derajat Fahrenheit sama dengan:\n"
                << (5.0/9)*(degrees - 32) << " derajat Celcius\n"
                << Reamur(Fahrenheit(degrees, "Fahrenheit"), "Fahrenheit") << " derajat Reamur\n"
                << Kelvin(Fahrenheit(degrees, "Fahrenheit"), "Fahrenheit") << " derajat Kelvin\n";
           break;
       case 3:
           cout << degrees << " derajat Reamur sama dengan:\n"
                << (5.0/4)*degrees << " derajat Celcius\n"
                << Fahrenheit(Reamur(degrees, "Reamur"), "Reamur") << " derajat Fahrenheit\n"
                << Kelvin(Reamur(degrees, "Reamur"), "Reamur") << " derajat Kelvin\n";
           break;
       case 4:
           cout << degrees << " derajat Kelvin sama dengan:\n"
                << Fahrenheit(degrees - 273.15, "Kelvin") << " derajat Fahrenheit\n"
                << Reamur(degrees - 273.15, "Kelvin") << " derajat Reamur\n"
                << degrees - 273.15 << " derajat Celcius\n";
           break;
      
    }
   
}
