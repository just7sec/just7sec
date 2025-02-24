//Latihan 2
//123140148

#include<bits/stdc++.h>
using namespace std;

//Deklarasi struct untuk menyimpan data mahasiswa
struct Mahasiswa{
    string nama,NIM;
    int nilai;
    //fungsi untuk overload data== (untuk membuat beberapa fungsi dengan nama yang sama tetapi dengan daftar parameter yang berbeda)
    bool operator==(const string& search) const{
        return NIM == search;
    }
};
//Fungsi untuk menambah data
void tambah(vector<Mahasiswa> *vec){
    string nama,nim;
    int nilai;
    cout<<"Masukkan nama mahasiswa: ";
    cin>>nama;
    cout<<"Masukkan NIM mahasiswa: ";
    cin>>nim;
    cout<<"Masukkan nilai ujian mahasiswa: ";
    cin>>nilai;
    Mahasiswa data = {nama, nim, nilai};
    vec->push_back(data);
}
//Fungsi untuk mencari data dan mengembalikan posisi data
vector<Mahasiswa>::iterator search(vector<Mahasiswa> *vec, string nim){
    auto it = find(vec->begin(), vec->end(), nim);
    if(it != vec->end()){
        return it;
    }else{
        return vec->end();
    }
}
//Fungsi untuk menghapus data
void hapus(vector<Mahasiswa> *vec){
    string nim;
    cout<<"Masukkan NIM yang ingin dihapus: ";
    cin>>nim;
    if(search(vec, nim) != vec->end()){
        vec->erase(search(vec, nim));
    }else{
        cout<<"Tidak ada mahasiswa dengan NIM "<<nim<<endl;;
    }
}
//Fungsi untuk mencari data
void search(vector<Mahasiswa> *vec){
    string nim;
    cout<<"Masukkan NIM yang ingin dicari: ";
    cin>>nim;
    if(search(vec, nim) != vec->end()){
        cout<<"Data ditemukan pada posisi "<<search(vec, nim) - vec->end() + 1<<endl;
    }else{
        cout<<"Tidak ada mahasiswa dengan NIM "<<nim<<endl;;
    }
}

int main(){
    int x;
    vector<Mahasiswa> mahasiswa;
    vector<Mahasiswa> *opt = &mahasiswa;
    bool s = 1;
    //main menu
    while(s){
        cout<<"Menu:"<<endl;
        cout<<"1. Tambah Data Mahasiswa"<<endl;
        cout<<"2. Hapus Data Mahasiswa berdasarkan NIM"<<endl;
        cout<<"3. Cari Data Mahasiswa berdasarkan NIM"<<endl;
        cout<<"4. Keluar"<<endl;
        cout<<"Pilihan: ";
        cin>>x;
        switch(x) {
            case 1:
                tambah(opt);
                cout<<"Ukuran data saat ini: "<<mahasiswa.size()<<endl;
                break;
                
            case 2:
                hapus(opt);
                cout<<"Ukuran data saat ini: "<<mahasiswa.size()<<endl;
                break;
            
            case 3:
                search(opt);
                break;
            
            case 4:
                s = 0;
                cout<<"Program Selesai"<<endl;
                break;
        }
    }
}
