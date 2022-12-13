#include <stdio.h>

void swap(int *x, int *y);

int main(int argc, char *argv[]){
    int a, b;
    printf("Masukkan nilai a: ");
    scanf("%d", &a);
    printf("Masukkan nilai b: ");
    scanf("%d", &b);

    printf("Sebelum:\n a = %d\n b = %d\n", a, b);
    swap(&a, &b);
    printf("Sesudah :\n a = %d\n b = %d\n", a, b);

    return 0;
}

void swap(int *x, int *y){
    int temp = x;
    printf("%p\n", temp);
    // *x = *y;
    // *y = temp;
}