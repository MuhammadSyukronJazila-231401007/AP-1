#include <stdio.h>
#include <conio.h>

void main(){
    char nama[50];
    int nim;
    char kom;
    float ip;
    
    printf("Masukkan Nama : ");
    gets( nama); // untuk ambil nama yang lebih dari 2 kalimat

    printf("Masukkan NIM : ");
    scanf("%d", &nim);

    printf("Masukkan KOM : ");
    scanf(" %c", &kom);  // spasi di awal %c itu untuk menghindari variabel kom
    // mengambil escaped char \n (karena user mengklik enter setelah menginput nim)

    printf("Masukkan IP : ");
    scanf("%f", &ip);

    printf("Nama : ");
    puts(nama);
    printf("NIM : %d\n", nim);
    printf("KOM : %c\n", kom);
    printf("IP : %.2f\n", ip);
    getch();
}