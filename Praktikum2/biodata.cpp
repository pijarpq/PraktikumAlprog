#include <iostream>
using namespace std;

int main() {

    string nama;
    int umur;
    char jenis_kelamin;

    cout << "Siapa nama kamu?" << endl;
    cout << "Jawab: ";
    getline(cin, nama);

    cout << "Nama kamu adalah " << nama << endl;

    return 0;
}