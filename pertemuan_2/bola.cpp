#include <iostream>
#include <math.h>
using namespace std;

main(){
    system("CLS");

    float luas,volume,r;
    const float PHI = 3.14;

    cout << "Masukkan jari-jari bola : ";
    cin >> r;

    luas = 4 * PHI * pow(r,2);
    volume = (4/3) * PHI * pow(r,3);

    cout << "Luas bola = " << luas <<endl ;
    cout << "Volume bola = " << volume <<endl;
    cout << pow(r,3);
}