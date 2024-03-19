#include <iostream>
using namespace std;

main(){
    float berat,tinggi,bmi;
    cout << "Perhitunga BMI\n";
    cout << "Masukkan berat badan (dalam kg) : ";
    cin >> berat;
    cout << "Masukkan tinggi badan (dalam meter) : ";
    cin >> tinggi;
    bmi = berat/(tinggi * tinggi);
    if (bmi < 18.5){
        cout << "Berat badan kamu kurang";
    }else if (bmi >= 18.5 && bmi < 25){
        cout << "Berat badan kamu normal";
    }
    else if (bmi >= 25 && bmi < 30){
        cout << "Berat badan kamu berlebih";
    }else{
        cout << "Kamu tergolong obesitas";
    }
}