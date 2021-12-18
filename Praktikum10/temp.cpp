#include <iostream>

using namespace std;

  main () {
    int i,j,b,k,m1[10][10],m2[10][10],hasil[10][10];


    // Minta Baris dan Kolom Matriks
    cout << "Masukan baris matriks : ";
    cin >> b;
    cout << "Masukan kolom matriks : ";
    cin >> k;

    //Masukan Elemen Matriks Pertama
    for (i = 0; i < b; i++) {
      for (j = 0; j < k; j++) {
        cout << "Masukan elemen matriks pertama : ";
        cin >> m1[i][j];
      }
    }

    cout << "==========================================================" << endl;

    //Tampilkan Inputan Elemen Matriks
    cout << "Elemen matriks pertama yg anda masukan : " << endl;
    for (i = 0; i < b; i++) {
      for (j = 0;j < k; j++) {
            cout << m1[i][j] << "\t";
      }
      cout << endl;
    }

    cout << "==========================================================" << endl;

    //Masukan Elemen Matriks Kedua
    for (i = 0; i < b; i++) {
      for (j = 0; j < k; j++) {
        cout << "Masukan elemen matriks kedua : ";
        cin >> m2[i][j];
      }
    }

    cout << "==========================================================" << endl;

    //Tampilkan Inputan Elemen Matriks
    cout << "Elemen matriks kedua yg anda masukan : " << endl;
    for (i = 0; i < b; i++) {
      for (j = 0;j < k; j++) {
            cout << m2[i][j] << "\t";
      }
      cout << endl;
    }

    cout << "==========================================================" << endl;

    //Hasil Penjumlahan kedua matriks

    cout << "Hasil Penjumlahan Matriks Berordo " << b << " x " << k << " adalah : " << endl;

    for (i = 0; i < b; i++) {
      for (j = 0; j < k; j++) {
         hasil[i][j] = m1[i][j] + m2[i][j];
        cout << hasil[i][j] << "\t";
      }
      cout << endl;
    }

  }