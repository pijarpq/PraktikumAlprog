#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "Masukan banyak nilai: ";
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cout << "Masukan nilai index ke-" << i << ": ";
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            cout << "Nilai array index ke-" << i << ": " << arr[i] << " adalah bilangan genap" << endl;
        }else {
            cout << "Nilai array index ke-" << i << ": " << arr[i] << " adalah bilangan ganjil" << endl;
        }
    }



    return 0;
}