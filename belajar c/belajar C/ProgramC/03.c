/*
##Basic C Program##
-Constanta dan Variable
-expression
-statement
-c function types dan names
-arguments to functions
-the body of a function
-function call
*/

/*
 1. Constanta dan Variable
    constanta adalah nilai yang tidak dapat diubah selama eksekusi program. Contoh: 5, 3.14, 'A', "Hello"
    variable adalah lokasi memori yang dapat menyimpan nilai yang dapat diubah selama eksekusi program. Contoh: int x = 5; float y = 3.14; char c = 'A'; char str[] = "Hello";
2. Expression
    expression adalah kombinasi dari konstanta, variabel, operator, dan fungsi yang menghasilkan nilai. Contoh: x + y, 5 * (3 + 2), strlen(str)
3. Statement
    statement adalah unit eksekusi dalam program C. Contoh: x = 5;      
4. C function types dan names
    C function types adalah tipe data yang dikembalikan oleh fungsi. Contoh: int, float, void
    C function names adalah nama yang diberikan untuk fungsi. Contoh: main, printf, scanf   
5. Arguments to functions
    arguments to functions adalah nilai yang diteruskan ke fungsi saat dipanggil. Contoh: printf("Hello, %s!", name); di mana "Hello, %s!" dan name adalah argumen untuk fungsi printf.
6. The body of a function
    The body of a function adalah bagian dari fungsi yang berisi pernyataan-pernyataan yang akan dieksekusi saat fungsi tersebut dipanggil. Contoh:
    int add(int a, int b) {
        return a + b;
        }
7. Function call
    Function call adalah proses memanggil fungsi untuk dieksekusi. Contoh: int  


    ##Operator aritmatika##
    -Operator aritmatika digunakan untuk melakukan operasi matematika pada nilai numerik.
    -Operator aritmatika dasar dalam bahasa C meliputi:
        -Penjumlahan (+)
        -Pengurangan (-)
        -Perkalian (*)
        -Pembagian (/)
        -Modulus (%)

    */

/*Latihan*/
/*Fungsi ini menaambahkan 2 bilangan bulat dan mengembalikan hasilnya*/
#include <stdio.h>
int integer_add( int x, int y )
 {
    int result;
    result = x + y;
    return result;
}

int main()
{
    int sum;
    sum = integer_add(5, 10);
    printf("Penjumlahan 5 dan 10 adalah: %d\n", sum);
    return 0;
}


/*Ringkasan
-Konstanta dalam bahasa C adalah nilai yang tidak pernah berubah. Variabel, di sisi lain, dapat memiliki nilai yang berbeda-beda.
-Kombinasi konstanta, variabel, dan operator disebut ekspresi dalam bahasa C. Ekspresi digunakan untuk menyatakan berbagai komputasi.
-Operator aritmatika meliputi +, -, *, /, dan %.
-Sebuah pernyataan terdiri dari ungkapan lengkap yang diakhiri dengan titik koma.
-Compiler C memperlakukan blok pernyataan sebagai satu pernyataan tunggal, meskipun blok pernyataan tersebut dapat berisi lebih dari satu pernyataan.
-Tipe fungsi menentukan tipe nilai kembalian yang dihasilkan oleh fungsi tersebut.
-Anda harus mengikuti aturan tertentu untuk membuat nama fungsi yang valid.
-Argumen berisi informasi yang ingin Anda berikan ke suatu fungsi. Daftar argumen berisi dua argumen atau lebih yang dipisahkan oleh koma.
-Tanda kurung buka ({) dan tanda kurung tutup (}) digunakan untuk menandai awal dan akhir fungsi C.
-Isi suatu fungsi mencakup deklarasi variabel dan pernyataan. Biasanya, suatu fungsi hanya perlu menyelesaikan satu tugas.
*/

