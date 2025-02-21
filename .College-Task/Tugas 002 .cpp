#include <iostream>
using namespace std;

int main ()
{
    float rata;
    int x;
    float sum = 0;
    
    for (int a=0;a<5;a++)
    {
        cout<<"Masukkan tinggi mahasiswa ke -"<<a+1<<" : ";
        cin >> x;
        sum+=x;
    }
    rata=sum/5;
    cout <<"Nilai rata-rata tinggi badan adalah : "<<rata<<endl;

    return 0;
}    
    
