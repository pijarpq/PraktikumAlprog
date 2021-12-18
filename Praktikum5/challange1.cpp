#include <iostream>

using namespace std;

	main() {
		int batas;

		cout << "Masukan angka: ";
		cin >> batas;

		int i;
		int j = 1;
			for (i = 1; i <= batas; i++) {
				j *=  2;
				cout << j << "  ";
			}
	}
