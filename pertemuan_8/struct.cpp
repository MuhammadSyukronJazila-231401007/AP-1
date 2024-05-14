#include <iostream>
#include <vector>
using namespace std;

// struct declaration
struct Mahasiswa
{
    string nama,nim;
    float nilai;
};

typedef struct 
{
    string nama,num;
    float nilai;
} mhs ;



main(){
    // struct initialization
    // Mahasiswa mhs;

    // cout << "Masukkan nama : ";
    // getline(cin, mhs.nama);
    // cout << "Masukkan nim : ";
    // cin >> mhs.nim;
    // cout << "Masukkan nilai : ";
    // cin >> mhs.nilai;

    // cout << "Nama anda " << mhs.nama << " nim anda " << mhs.nim << " nilai anda " << mhs.nilai;

    Mahasiswa mhs;
    vector<Mahasiswa> mahasiswa;
    int n;

    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;

    for (int i = 0; i < n; i++){
        cout << "Mahasiswa " << i+1 << endl;

        cin.get();
        cout << "Masukkan nama : ";
        getline(cin, mhs.nama);
        cout << "Masukkan nim : ";
        cin >> mhs.nim;
        cout << "Masukkan nilai : "; // kalo salah satu data di struct tidak diisi tidak apa2 (beda dengan class)
        cin >> mhs.nilai;

        mahasiswa.push_back(mhs); // wajib di push back karena vector berbeda dengan array dimana ketika 
        // menginisialisasi vector maka belum ada memori yang dialokasikan untuk vector tsb 
        // (Karena vector belum ditetapkan ukurannya dan dinamis)
    }
    
    for (int i = 0; i < n; i++){
        cout << "Mahasiswa " << i+1 << endl;
        cout << "Nama : " << mahasiswa[0].nama << endl;
        cout << "Nim : " << mahasiswa[0].nim << endl;
        cout << "Nilai : " << mahasiswa[0].nilai << endl;
    }
}