#include <iostream>
using namespace std;


void penjumlahanBiasa(int a, int b){
    cout << a + b << endl;
}

void penjumlahanPointer(int* a, int* b ){
    *a += *b;
}

void kalidua(int* a){
    *a *= 2;
}

main(){
    // POINTER DECLARATION
    // Normal Variable--> variable(data), &variable(alamat memori)
    int number = 21;

    // Pointer Variable--> variable(alamat memori var yang ditunjuj), &variable(alamat memori pointer), *variabel(data variabel yang ditunjuk)
    int* p_number = &number;

    cout << "Isi variabel number = " << number << endl;
    cout << "Alamat memori variabel number = " << &number << endl;
    cout << "Isi variabel p_number = " << p_number << endl; 
    cout << "Isi variabel p_number = " << p_number << endl; 
    cout << "Alamat memori variabel p_number = " << &p_number << endl; 

    cout << endl;

    *p_number = 12;
    cout << "Isi variabel number = " << number << endl;
    cout << "Alamat memori variabel number = " << &number << endl;
    cout << "Isi variabel p_number = " << p_number << endl; 
    cout << "Isi variabel p_number = " << p_number << endl; 
    cout << "Alamat memori variabel p_number = " << &p_number << endl; 

    cout << endl;
    // POINTER IN ARRAY

    int num[] = {1,2,3,4,5};
    int* p_num = num;
    cout << "Isi variabel num = " << num[0] << endl;
    cout << "Alamat memori variabel num = " << &num[0] << endl;
    cout << "Alamat memori variabel num = " << num << endl;
    cout << "Isi variabel p_num = " << *p_num << endl;
    cout << "Alamat memori variabel p_num = " << &p_num << endl;

    cout << endl;

    *p_num += 5;
    cout << "Isi variabel num = " << num[0] << endl;
    cout << "Alamat memori variabel num = " << &num[0] << endl;
    cout << "Alamat memori variabel num = " << num << endl;
    cout << "Isi variabel p_num = " << *p_num << endl;
    cout << "Alamat memori variabel p_num = " << &p_num << endl;

    // POINTER IN PARAMATER
    int num1 = 3;
    int num2 = 9;
    penjumlahanBiasa(num1,num2);
    cout << num1 << endl;
    cout << num2 << endl;
    penjumlahanPointer(&num1,&num2);
    cout << num1 << endl;
    cout << num2 << endl;

    // POINTER IN POINTER
    int score = 4;
    int* p_score = &score;
    int** ptr_p_score = &p_score;
    cout << "Isi variabel score "<< score << " dan alamat memorinya " << &score << endl;
    cout << "Isi variabel p_score "<< p_score << "isi variabel yang ditunjuk" << *p_score << " dan alamat memorinya " << &p_score << endl;
    cout << "Isi variabel ptr_p_score "<< ptr_p_score << "isi variabel yang ditunjuk" << **ptr_p_score << " dan alamat memorinya " << &ptr_p_score << endl;
    
    // DYNAMIC POINTER
    int* ptr = new int;  // Memory allocation
    *ptr = 5;
    cout << "Isi variabel ptr " << *ptr << " alamat varibel ptr " << &ptr << endl;
    delete ptr;  // Memory deallocation

    // Mengubah nilai variabel dari fungsi
    int n;
    cout << "Masukkan nilai : ";
    cin >> n ;
    kalidua(&n);
    cout << n << endl;
}

