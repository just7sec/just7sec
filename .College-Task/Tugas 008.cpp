#include <iostream>
using namespace std;

int Faktorial(unsigned int n){
    if (n < 0){
        return -1;
    } else if (n>1){
        return (n*Faktorial (n-1));
    } else {
        return 1;
    }
}

int main (){
    unsigned int n;

    cout << "Masukkan nilai yang akan difaktorialkan : ";
    cin >> n;
    
    unsigned int b = Faktorial(n);
    cout <<"Faktorial dari "<<n<<" adalah "<<b;

}
