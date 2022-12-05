#include <stdio.h>

int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

int main(int argc, char *argv[]){
    int *p;
    printf("Element pertama %d\n", arr[0]);
    printf("Lokasi element pertama %p\n", arr);

    p = &arr[0];
    printf("Alamat elemen indeks 0 = %p \n", p);

    for (int i = 0; i < 9; i++)
    {
        printf("Elemen ke %d = %d\n", i, *p);
        p++;
    }
    

    return 0;
}