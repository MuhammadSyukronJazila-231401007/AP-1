#include <iostream>
#include <iomanip>
using namespace std;

main(){
    int nilai;
    cin >> nilai;

    //if biasa
    if(nilai <= 65){
        cout << "ANDA TIDAK LULUS" << endl;
    }

    // if else
    if (nilai <= 65){
        cout << "ANDA TIDAK LULUS" << endl;
    }else{
        cout << "ANDA LULUS" << endl;
    }

    // if kondisi > 2
    if(nilai == 100){
        cout << "KAMU HEBAT" << endl;
    }else if (nilai <= 65){
        cout << "ANDA TIDAK LULUS" << endl;
    }else{
        cout << "ANDA LULUS" << endl;
    }

    // if bersarang
    if(nilai <= 65){
        cout << "ANDA TIDAK LULUS" << endl;
    }else{
        if(nilai == 100){
            cout << "ANDA LULUS dan ANDA HEBAT" << endl;
        }else{
            cout << "ANDA LULUS" << endl;
        }
    }

    // switch case
    switch (nilai){
    case 1:
        cout << "Senin" << endl;
        break;
    case 2:
        cout << "Selasa" << endl;
        break;    
    case 3:
        cout << "Rabu" << endl;
        break;
    case 4:
        cout << "Kamis" << endl;
        break;
    case 5:
        cout << "Jumat" << endl;
        break;
    case 6:
        cout << "Sabtu" << endl;
        break;
    case 7:
        cout << "Minggu" << endl;
        break;
    default:
        cout << "Hari" << endl;
        break; //OPSIONAL
    }

    // switch case range nilai
    switch (nilai){
    case 85 ... 100:
        cout << 'A' << endl;
        break;
    case 80 ... 84:
        cout << "B+" << endl;
        break;
    case 75 ... 79:
        cout << 'B' << endl;
        break;
    case 70 ... 74:
        cout << "C+" << endl;
        break;
    case 65 ... 69:
        cout << 'C' << endl;
        break;
    case 60 ... 64:
        cout << 'D' << endl;
        break;
    default:
        cout << "E" << endl;
        break;
    }

    if(nilai % 2 == 0){
        cout << "Genap" << endl;
    }else{
        cout << "Ganjil" << endl;
    }

    // Ternary Operator => kalo true kode setelah tanda ? dijalankan, kalo false kode setelah : akan dijalankan
    string checkNum = (nilai % 2 == 0) ? "Genap" : "Ganjil";
    cout << nilai << " adalah bilangan " << checkNum << endl;
    
    float ril = 1.9;
    printf("%.1f \n",ril);

    cout << fixed << setprecision(2) << ril;
}
