#include <iostream>
using namespace std;

main(){
    string nama;
    int nim;
    char kom;
    float ip;

    cout << "masukkan Nama : ";
    getline(cin, nama); //untuk ambil nama lebih dari 2 kalimat

    cout << "masukkan NIM : ";
    cin >> nim;

    cout << "masukkan KOM : ";
    cin >> kom;
    
    cout << "masukkan IP : ";
    cin >> ip;

    cout << "Nama : " << nama << endl; 
    cout << "NIM : " << nim << endl; 
    cout << "KOM : " << kom << endl; 
    cout << "IP : " << ip << endl; 
}

