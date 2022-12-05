#include <stdio.h>

void swap(int *a, int *b);

int main(int argc, int argv[]){
    int a, b;
    printf("a : ");
    scanf("%d", &a);
    printf("b : ");
    scanf("%d", &b);

    printf("Sebelum ditukar a: %d, b: %d\n", a, b);
    swap(&a, &b);
    printf("Sebelum ditukar a: %d, b: %d\n", a, b);

    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}