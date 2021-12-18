#include <iostream>
using namespace std;
int main() {
  int matriks1[10][10], matriks2[10][10], hasil[10][10];
  int i, j, k, barisA, kolomA, barisB, kolomB, jumlah = 0;
  cout << "Masukkan jumlah baris matriks A: ";
  cin >> barisA;
  cout << "Masukkan jumlah kolom matriks A: ";
  cin >> kolomA;
  cout << endl;
  cout << "Masukkan jumlah baris matriks B: ";
  cin >> barisB;
  cout << "Masukkan jumlah kolom matriks B: ";
  cin >> kolomB;

  cout << endl;
  cout << endl;

  if(kolomA != barisB){
    cout << "Matriks tidak dapat dikalikan satu sama lain.\n";
  } else {
    for(i = 0; i < barisA; i++){
      for(j = 0; j < kolomA; j++){
        cout << "Masukkan elemen matriks pertama: ";
        cin >> matriks1[i][j];
      }
    }
    cout << endl;
    cout << "==========================================================" << endl;
    cout << "Elemen matriks pertama yang kamu masukan:" <<  endl;
    for(i = 0; i < barisA; i++){
      for(j = 0; j < kolomA; j++){
        cout << matriks1[i][j] << "\t";
      }
      cout << endl;
    }
    cout << "==========================================================" << endl;
    cout << endl;


    for(i = 0; i < barisB; i++){
      for(j = 0; j < kolomB; j++){
        cout << "Masukkan elemen matriks kedua: ";
        cin >> matriks2[i][j];
      }
    }

    cout << endl;
    cout << "==========================================================" << endl;
    cout << "Elemen matriks kedua yang kamu masukan:" <<  endl;
    for(i = 0; i < barisA; i++){
      for(j = 0; j < kolomA; j++){
        cout << matriks2[i][j] << "\t";
      }
      cout << endl;
    }
    cout << "==========================================================" << endl;
    cout << endl;


    for(i = 0; i < barisA; i++){
      for(j = 0; j < kolomB; j++){
        for(k = 0; k < barisB; k++){
          jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }

    cout << endl;
    cout << "==========================================================" << endl;
    cout << "Hasil perkalian matriks: \n";
    for(i = 0; i < barisA; i++){
      for(j = 0; j < kolomA; j++){
        cout << hasil[i][j] << "\t";
      }
      cout << endl;
    }
    cout << "==========================================================" << endl;
  }
  
  return 0;
}