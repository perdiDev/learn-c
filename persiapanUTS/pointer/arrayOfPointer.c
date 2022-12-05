#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int *array;

    // Dinamik array: Ukuran array dapat ditentukan setelah program dijalankan
    array = (int *)malloc(4 * sizeof(int));
    for(int i=0; i<4; i++)
        array[i] = i+1;

    // Menampilkan isi array
    for(int i=0; i<4; i++)
        printf("%d ", array[i]);

    return 0;
}