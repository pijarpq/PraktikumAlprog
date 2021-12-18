#include <iostream>
using namespace std;


int main() {

    int a = 6;
    int b = 3;
    int hasil;


    // Menggunakan operator bitwise AND
    hasil = a & b;
    cout << "a & b = " << hasil << endl;

    // Menggunakan operator bitwise OR
    hasil = a | b;
    cout << "a & b = " << hasil << endl;

    // Menggunakan operator bitwise XOR
    hasil = a ^ b;
    cout << "a & b = " << hasil << endl;

    // Menggunakan operator bitwise NOT
    hasil = ~a;
    cout << "a & b = " << hasil << endl;

    // Menggunakan operator bitwise Left Shift
    hasil = a << 1;
    cout << "a & b = " << hasil << endl;

    // Menggunakan operator bitwise Right Shift
    hasil = a >> 1;
    cout << "a & b = " << hasil << endl;

    

    return 0;
}