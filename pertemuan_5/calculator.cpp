#include <iostream>
#include "calc_head.h"
using namespace std;

int pangkat(int a, int b);

main(){
    int op, a, b;
    char s = 'Y';
    
    while (s == 'Y' || s == 'y')
    {
        system("CLS");
        garis();
        cout << "Selamat Datang di Program Kalkulator" << endl;
        garis();
        menu();
        garis();
        cout << "Masukkan operasi : ";
        cin >> op;
        cout << "Masukkan angka pertama : ";
        cin >> a;
        cout << "Masukkan angka kedua : ";
        cin >> b;
        garis();
        switch (op)
        {
        case 1:
            cout << "Hasil " << a << " + " << b << " = " << jumlah(a,b);
            break;
        case 2:
            cout << "Hasil " << a << " - " << b << " = " << kurang(a,b);
            break;
        case 3:
            cout << "Hasil " << a << " * " << b << " = " << kali(a,b);
            break;
        case 4:
            cout << "Hasil " << a << " / " << b << " = " << bagi(a,b);
            break;
        case 5:
            cout << "Hasil " << a << " % " << b << " = " << mod(a,b);
            break;

        default:
            break;
        }

        cout << "\nApakah anda ingin mengulang? [Y/N] : ";
        cin >> s;
    }
    
}

int pangkat(int a, int b){
    //kode disini
}