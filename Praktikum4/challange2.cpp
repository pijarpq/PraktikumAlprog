#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	float a,b,hasil;
	char aritmatika;

	cout << "--------------Selamat Datang Di Program Kalkulator--------------\n\n";

	cout << "		Masukan Nilai Pertama : ";
	cin >> a;
	
		
	cout << "		Pilih operator + | - | / | * : ";
	cin >> aritmatika;

	cout << "		Masukan Nilai Kedua : ";
	cin >> b;

	cout << "		Hasil Dari ";
	cout << a << aritmatika << b << " = " ;
	 

	if (aritmatika == '+') {
		hasil = a + b;
		cout << hasil;
	}else if (aritmatika == '-') {
		hasil = a - b;
		cout << hasil;
	}else if (aritmatika == '*') {
		hasil = a * b; 
		cout << hasil;
	}else if (aritmatika == '/') {
		hasil = a / b;
		cout << hasil;
	}else {
		cout << "Operator Anda Salah" << endl;
	}
}