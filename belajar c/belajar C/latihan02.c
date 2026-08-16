#include <stdio.h>
int main()  {
    int nilai1, nilai2, hasil;
    printf("Masukkan Angka Pertama: ");
    scanf("%d", &nilai1);

    printf("Masukkan Angka Kedua:");
    scanf("%d", &nilai2);
    
    hasil = nilai1 + nilai2;

    printf("Hasil penjumlahan: %d\n", hasil);

    return 0;
}