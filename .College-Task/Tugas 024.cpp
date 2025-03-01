#include<iostream>
using namespace std;

int main (){
    //library
    const float phi = 3.14;
    int diagonalAB = 20;
    int r = 10;
    float LuasLingkaran;
    float LuasBelahKetupat;

    //Algoritma
    LuasLingkaran = phi * r * r;
    LuasBelahKetupat = 0.5 * diagonalAB * diagonalAB;
    
    //Output
    cout<<"Luas Lingkaran: "<<LuasLingkaran<<endl;
    cout<<"Luas Belah Ketupat: "<<LuasBelahKetupat<<endl;

    return 0;
}
