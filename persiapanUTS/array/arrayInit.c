#include <stdio.h>

int main(int argc, char *argv[]){
    // Deklarasi array dengan mendefinisikan jumlah elemennya
    int array[4];
    // Inisialisasi array
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;

    // Deklarasi & Inisialisasi
    int array2[] = {1, 2, 3, 4}; // compiler sudah pintar untuk membaca jumlah elemen array

    // Mengubah nilai elemen array
    array2[3] = 0;

    // Menampilkan isi array
    for(int i=0; i<4; i++)
        printf("%d " ,array[i]);
    printf("\n");

    // Menampilkan isi array2
    for(int i=0; i<4; i++)
        printf("%d " ,array2[i]);
    printf("\n");

    return 0;
}