#include <iostream>
#include "header_pascal.h"
using namespace std;

// Function
int jumlah(int a, int b){
    // cout << a + b << endl;
    return a + b;
}

int kurang(int a, int b){
    // cout << a - b << endl;
    return a - b;
}

// Procedure
void garis(){
    cout << "==============" << endl;
}

int kali(int a, int b){
    return a * b;
}

float bagi(int a, int b){
    // type casting (mengubah tipe data variabel secara paksa)
    // return (float) a / b; ---> cara lama, banyak kelemahan 
    return static_cast<float>(a) / static_cast<float>(b); // cara baru lebih mantap
}

void bintang(){
    cout << "**************" << endl;
}

begin
    s;
    o l jumlah(7,1) l e;
    o l kurang(7,4) l e;
    o l kali(3,2) l e;
    o l bagi(2,3) l e;
    garis();
    writeln(PI);
    bintang();
    string k;
    o l "Masukkan kata: ";
    i r k;
    garis();
    o l k l e;
    garis();
end