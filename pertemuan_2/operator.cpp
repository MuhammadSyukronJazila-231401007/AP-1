#include <iostream>
using namespace std;

main(){
    system("CLS");
    int a,b;
    
    a = 7;
    b = 3;

    int tambah = a + b;
    int kurang = a - b;
    int kali = a * b;
    float bagi = (float) a / b;
    int modulo = a % b;

    cout << "Hasil tambah = " << tambah << "\n";
    cout << "Hasil kurang = " << kurang << "\n";
    cout << "Hasil kali = " << kali << "\n";
    cout << "Hasil bagi = " << bagi << "\n";
    cout << "Hasil modulo = " << modulo << "\n";

    // cout << (true  && true) << endl;
    // cout << (true  && false) << endl;
    // cout << (false && true) << endl;
    // cout << (false && false) << endl;

    // cout << (true  || true) << endl;
    // cout << (true  || false) << endl;
    // cout << (false || true) << endl;
    // cout << (false || false) << endl;

    // cout << !true << endl;
    // cout << !false << endl;

    cout << (5 & 7) << endl;
    cout << (5 | 7) << endl;
    cout << (5 ^ 7) << endl;
    cout << (~7) << endl;
    cout << (7 << 2) << endl;
    cout << (7 >> 2) << endl;

// Pre Increment
    cout << a << endl;
    cout << ++a << endl;

    cout << b << endl;
    cout << ++b << endl;

// Post Increment
    cout << a++ << endl;
    cout << a << endl;

    cout << b++ << endl;
    cout << b << endl;
}