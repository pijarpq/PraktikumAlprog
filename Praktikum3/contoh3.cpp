#include <iostream>
using namespace std;


int main() {

    int a = 5;
    int b = 10;

    // Pengisian dan penambahan
    b += a;
    cout << "Hasil b += a adalah " << b << endl;
    
    a = 5;
    b = 10;
    // Pengisian dan pengurangan
    b -= a;
    cout << "Hasil b -= a adalah " << b << endl;

    a = 5;
    b = 10;
    // Pengisian dan perkalian
    b *= a;
    cout << "Hasil b *= a adalah " << b << endl;
    
    a = 5;
    b = 10;
    // Pengisian dan pembagian
    b /= a;
    cout << "Hasil b /= a adalah " << b << endl;

    a = 5;
    b = 10;
    // Pengisian dan sisabagi
    b %= a;
    cout << "Hasil b %= a adalah " << b << endl;

   
    

    return 0;
}