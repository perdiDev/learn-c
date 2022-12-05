#include <stdio.h>
#include <stdlib.h> // Fungsi malloc

int main(int argc, char *argv[]){
    int a = 2;
    int *ptr; // Inisialisasi pointer
    ptr = &a; // Pointer ke alamat a

    printf("Alamat a  : %p\n", &a);
    printf("Alamat ptr: %p\n", ptr);
    printf("Nilai ptr : %d\n", *ptr);
    
    // Inisialisasi pointer dengan alokasi memori
    int *ptr_malloc;
    ptr_malloc = malloc(sizeof(int));
    *ptr_malloc = 33;
    printf("Pointer : %d\n", *ptr_malloc);

    return 0;
}