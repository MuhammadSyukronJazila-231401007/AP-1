#include <iostream>
using namespace std;

int jumlah(int a, int b){
    // cout << a + b << endl;
    return a + b;
}

int kurang(int a, int b){
    // cout << a - b << endl;
    return a - b;
}

int kali(int a, int b){
    return a * b;
}

float bagi(int a, int b){
    // type casting (mengubah tipe data variabel secara paksa)
    // return (float) a / b; ---> cara lama, banyak kelemahan 
    return static_cast<float>(a) / static_cast<float>(b); // cara baru lebih mantap
}

int mod(int a, int b){
    return a % b;
}

void garis(){
    cout << "====================================" << endl;
}

void bintang(){
    cout << "************************************" << endl;
}

void menu(){
    cout << "1. Tambah" << endl;
    cout << "2. Kurang" << endl;
    cout << "3. Kali" << endl;
    cout << "4. Bagi" << endl;
    cout << "5. Modulo" << endl;
}
