#include <iostream>

using namespace std;

int main() {

    int batas = 0;
    cout << "Masukan angka: ";
    cin >> batas;

    for(int i = 0; i < batas; i++) {
        cout << batas - i << ", ";
    }

    return 0;
}