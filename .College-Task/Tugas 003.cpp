#include <iostream>
using namespace std;

int main (){
    
    int a;
    int sum = 0;

    for(int i=0;i<10;i++){
    cout << "Masukkan angka ke-"<<" ["<<i+1<<"]: ";
    cin >> a;

    sum = sum+a;
    }
    cout<<sum;
}
