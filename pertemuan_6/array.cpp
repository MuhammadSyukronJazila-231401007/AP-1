#include <iostream>
#include <array>
using namespace std;

main(){
    // int arr[3] = {23, 22, 21};
    // for (int i = 0; i < 3; i++){
    //     cout << arr[i] << " ";
    // }
    
    // multidimensional array
    // int matrix[2][3] = {{1,3,5},{2,4,6}};
    // for (int i = 0; i < 2; i++){
    //     for (int j = 0; j < 3; j++){
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    // String (array of character)
    // string nama = "zustine";
    // for (int i = 0; i < nama.length(); i++){
    //     cout << nama[i] << endl;
    // }
    
    // int n;
    // cout << "masukkan banyak mahasiswa" << endl;
    // float nilai[n];
    // for (int i = 0; i < n; i++){
    //     cout << "Nilai mahasiswa ke-" << i+1 << " : ";
    //     cin >> nilai[i];
    // }

    // for (int i = 0; i < n; i++){
    //     cout << "Nilai mahasiswa ke-" << i+1 << " : " << nilai[i];
    // }

    // string nama_karyawan[] = {"Andi", "Budi", "Cecep", "Doly", "Eka", "Jojor", "nakankdnasknask"};
    // for (int i = 0; i < sizeof(nama_karyawan)/ sizeof(string); i++)
    // {
    //     cout << nama_karyawan[i] << endl;
    //     cout << sizeof(nama_karyawan) << " VS " << sizeof(string) << endl;
    // }

    // int matriks1[2][2];
    // int matriks2[2][2];
    // int hasil[2][2];

    // cout << "Matriks 1" << endl;
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout << "Masukkan elemen baris " << i+1 << " kolom" << j+1 << " : ";
    //         cin >> matriks1[i][j];
    //     }
        
    // }

    // cout << "Matriks 2" << endl;
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout << "Masukkan elemen baris " << i+1 << " kolom" << j+1 << " : ";
    //         cin >> matriks2[i][j];
    //     }
        
    // }

    // cout << "Hasil penjumlahan" << endl;
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         hasil[i][j] = matriks1[i][j] + matriks2[i][j];
    //         cout <<  hasil[i][j];
    //     }
    //     cout << "\n";
    // }

    // cara lain inisialisai array
    array<float, 5> nilai = {80.9, 70.8, 75, 90, 99};

    cout << "Nilai :";
    // for (int i = 0; i < nilai.size(); i++){
    //     cout << nilai[i] << " ";
    // }
    
    for(float n : nilai){ // for each loop
        cout << n << " ";
    }
}