#include <iostream>

using namespace std;

int main() {

    int batas = 0;
    cout << "Masukan angka: ";
    cin >> batas;

    for(int i = 1; i <= batas; i++) {
        cout << i << ", ";
    }

    return 0;
}