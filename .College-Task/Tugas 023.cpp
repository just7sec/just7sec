//Latihan 1
//123140148

#include <bits/stdc++.h>
using namespace std;
//Deklarasi struct data Task
struct Task{
    string nama_tugas,deskripsi,deadline,status;
    string *stat;
};
//Fungsi untuk mengubah status
void Status(string *stat){
    string Arrange;
    cout<<"Masukkan status baru (To Do, In Progress, Done): ";
    cin>>Arrange;
    *stat = Arrange;
}
//Untuk menampilkan Message Selesai
void Message(){
    cout<<"Selesai";  
}
//Print data dari struct Task
void output(Task* Data){
    
    cout<<"Informasi Tugas: "<<Data->nama_tugas<<endl;
    cout<<"Nama Tugas: "<<Data->deskripsi<<endl;
    cout<<"Deskripsi: "<<Data->deadline<<endl;
    cout<<"Deadline: "<<Data->deadline<<endl;
    cout<<"Status: "<<Data->status<<endl;
}

int main(){ //Program utama untuk mengkombinasikan dan memanggil semua fungsi
    Task tugas;
    tugas.stat = &tugas.status;
    Task* Data = &tugas;
    cout<<"Masukkan informasi tugas:"<<endl;
    cout<<"Nama Tugas: ";
    getline(cin, tugas.nama_tugas);
    cout<<"Deskripsi: ";
    getline(cin, tugas.deskripsi);
    cout<<"Deadline: ";
    getline(cin, tugas.deadline);
    cout<<"Status: ";
    getline(cin, tugas.status);
    output(Data);
    cout<<"Apakah Anda ingin mengubah status tugas? (y/n): ";
    char answer;
    cin>>answer;
    //operator ternary
    (answer == 'y' || answer == 'Y') ? Status(tugas.stat) : Message();
    output(Data);

    return 0;
} 

