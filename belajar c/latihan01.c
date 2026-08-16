#include <stdio.h>
int main()  {
    int nilai1, nilai2, hasil;
    printf("Masukkan Angka Pertama: ");
    scanf("%d", &nilai1);

    printf("Maskukkan Angka Kedua");
    scanf("&d", &nilai2);

    hasil = nilai1 + nilai2;

    printf("Hasil Penjumlahan: %d\n", hasil);

    return 0;
}
