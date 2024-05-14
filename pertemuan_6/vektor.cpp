#include <iostream>
#include <vector>

using namespace std;

main(){
    vector<string> nama_karyawan = {"Andi", "Budi", "Cecep", "Doly", "Eka", "Jojo"};

    // for (int i = 0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << " ";
    // }
    // cout << "\n";

    // nama_karyawan.push_back("Wawan Mks");
    // for (int i = 0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << " ";
    // }
    // cout << "\n";

    // nama_karyawan.pop_back();
    // for (int i = 0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << " ";
    // }
    // cout << "\n";


    // nama_karyawan.erase(nama_karyawan.begin() + 3);
    // for (int i = 0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << " ";
    // }
    // cout << "\n";

    for(string karyawan : nama_karyawan){  // for each loop
        cout << karyawan << " ";
    }
}