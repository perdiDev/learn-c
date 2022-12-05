#include <stdio.h>

int main(int argc, char *argv[]){
    // Inisialisasi array 2d
    int array2d[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // Menampilkan isi array
    for (int baris = 0; baris < 2; baris++)
    {
        for(int kolom=0; kolom<3; kolom++)
            printf("%d\t", array2d[baris][kolom]);
        printf("\n");
    }

    // Akses array2d
    int elemen2ke1 = array2d[1][0]; // 4
    printf("\nArray baris 2 kolom 1 = %d\n", elemen2ke1);


    return 0;
}