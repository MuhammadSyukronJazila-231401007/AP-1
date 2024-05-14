#include <iostream>
#include <vector>
using namespace std;

class Mahasiswa{
    // Access Modifier
    private:
        string nama,nim; // Best practicenya di private
        float nilai;

    // Access Modifier
    public:
    // Constructor -> fungsi yang pertama kali dijalankan ketika class diinstansiasi
        Mahasiswa(string nama, string nim, float nilai){
            this->nama = nama;
            this->nim = nim;
            this->nilai = nilai;
        }

        // Getter Function
        string getName(){  // Best practice untuk mendapatkan data di class
            return this->nama;
        }

        void display(){
            cout << "Nama : " << this->nama << endl;
            cout << "Nim : " << this->nim << endl;
            cout << "Nilai : " << this->nilai << endl;
        }
};

main(){
    system("CLS");

    // Mahasiswa siswa1("Andi", "231410009", 98.4);
    // siswa1.display();
    // cout << siswa1.getName() << endl;
    
    vector<Mahasiswa> mahasiswa;
    string nama,nim;
    float nilai;
    int n;

    cout << "Masukkan banyak Mahasiswa :";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "Mahasiswa " << i+1 << endl;

        cin.get();
        cout << "Masukkan nama: ";
        getline(cin, nama);

        cout << "Masukkan nim: ";
        cin >> nim;

        cout << "Masukkan nilai: ";
        cin >> nilai;

        Mahasiswa mhs(nama, nim, nilai);
        mahasiswa.push_back(mhs);
    }

    for (int i = 0; i < n; i++){
        mahasiswa[i].display();
    }
    
}