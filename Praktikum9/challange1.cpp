#include <iostream>

using namespace std;

int main() {

    int arr[7] = {1, 6 ,8 ,5, 8, 10, 9};
    int n, z;


    for(int i = 0; i < 7; i++) {
        cout << "Nilai array index ke-" << i << ": " << arr[i] << endl;
    }

    awal:
    cout << "Index ke berapa yang akan dirubah: ";
    cin >> n;

    if(n > 7) {
        cout << "Nilai yang kamumasukan lebih dari panjang arary" << endl;
        goto awal;
    }

    cout << "Masukan nilai baru untuk merubah index ke-" << n << ": ";
    cin >> z;

    arr[n] = z;

    for(int i = 0; i < 7; i++) {
        cout << "Nilai array index ke-" << i << ": " << arr[i] << endl;
    }

    return 0;
}