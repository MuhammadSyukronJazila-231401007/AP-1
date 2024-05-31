#include <iostream>
#include <conio.h> // library untuk getch() dkk
using namespace std;

main(){
    // char nama[50];
    // int nim;
    // char kom;
    // float ip;

    // printf("Hello World\n"); // menampilkan Hello World

    // printf("Masukkan nama : ");
    // gets(nama);     //  gets = get string( 1 kalimat aja)

    // printf("Masukkan NIM : ");
    // scanf("%d", &nim); // %d untuk input tipe data int

    // printf("Masukkan KOM : ");
    // scanf(" %c", &kom); // %c untuk input tipe data char

    // printf("Masukkan IP : ");
    // scanf("%f", &ip); // %f untuk input tipe data real

    // printf("Nama : ");
    // puts(nama);     //* puts = put string (cetak string)

    // printf("NIM : %d\n", nim);
    // printf("KOM : %c\n", kom);
    // printf("IP : %.3f\n", ip);

    // printf("Press any button to continue...");
    // getch(); // klik tombol apapun untuk mengakhiri program
    
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

