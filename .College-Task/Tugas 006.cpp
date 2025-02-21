#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	int x;
	
	string nama[3] = {"Fathan","kiko","lala"};
	string asal[3] = {"Jerman","Nigera","Prancis"};
	int id[3]= {375,631,829};
	
	cin >> x;
	for(int n=0;x>n;n++)
	{
	cout << "Nama : " << nama[x]<<endl;
	cout << "Asal Negara : " << asal[x]<<endl;
	cout << "Nomor ID : " << id[x]<<endl;
	}

}


