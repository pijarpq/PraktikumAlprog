#include <iostream>

using namespace std;

int main() {

	int a = 2000000;
	int b = 1000000;

	int anak;
	int jbtn;

	cout << "Daftar Jabatan" << endl;
	cout << "		[1] Ketua Cabang" << endl;
	cout << "		[2] Sekretaris" << endl;

	cout << "Pilih Jabatan Anda : ";
	cin >> jbtn;


	switch (jbtn) {

		case 1:
			cout << "Jabatan Anda Adalah Kabang" << endl;
			cout << "Masukan Jumlah Anak : ";
			cin >> anak;

				if (anak > 3)
				{
					cout << "Gaji Anda = ";
					cout << 3 * a;

                    return 0;
				}else {
                    cout << "Gaji Anda = ";
					cout << anak * a;

                    return 0;
				}break;
		case 2:
			cout << "Jabatan Anda Adalah Sekretaris" << endl;
			cout << "Masukan Jumlah Anak : ";
			cin >> anak;

				if (anak > 3)
				{
					cout << "Gaji Anda = ";
					cout << 3 * b;

                    return 0;
				}else {
					cout << "Gaji Anda = ";
					cout << anak * b;

                    return 0;
				}break;


	}

	cout << "Jabatan Tidak Ada" << endl;

}