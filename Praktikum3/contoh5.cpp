#include <iostream>
using namespace std;


int main() {

    int a = 1;
    int b = 0;

    bool hasil;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Logika AND
    hasil = a && b;
    cout << "Hasil a && b = " << hasil << endl;

    // Logika OR
    hasil = a || b;
    cout << "Hasil a && b = " << hasil << endl;

    // Logika NOT
    cout << "Hasil a && b = " << !a << endl;
    

    return 0;
}