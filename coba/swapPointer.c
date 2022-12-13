#include <stdio.h>

void swap(int *a, int *b);

int main(int argc, char *argv[]){
    int a, b;
    printf("Masukkan nilai a: ");
    scanf("%d", &a);
    printf("Masukkan nilai b: ");
    scanf("%d", &b);

    printf("Sebelum: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("Sesudah: a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}