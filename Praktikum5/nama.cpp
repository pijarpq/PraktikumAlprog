#include <iostream>
using namespace std;

int main(){
	string nama,kelas,jurusan;
	int n;
	
	cout<<"\n\n+Program Nama+"<<endl;
	
	cout<<"\nMasukkan Jumlah Nama Yang ingin diinputkan :  ";
	cin>>n;
	cin.ignore();
	for(int i=1; i<=n ; i++){
		cout<<"\n\n\tNama ke "<<i;
		cout<<"\n\nNama\t: ";
		getline(cin,nama);
	}
	
}