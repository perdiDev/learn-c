#include <stdio.h>

int main(int agrc, char *argv[]){
    int *ptr;
    int a = 0;
    ptr = &a;

    printf("Alamat a : %p \n", &a);
    printf("Alamat ptr : %p \n", ptr);
    printf("Isi ptr : %d \n", ptr);
    printf("Pointer ke : %d \n", *ptr);

    return 0;
}