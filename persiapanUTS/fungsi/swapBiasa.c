#include <stdio.h>

int a, b;

void swap();

int main(int argc, char *argv[]){
    printf("a : ");
    scanf("%d", &a);
    printf("b : ");
    scanf("%d", &b);

    printf("Sebelum ditukar a: %d, b: %d\n", a, b);
    swap(a, b);
    printf("Sebelum ditukar a: %d, b: %d\n", a, b);

    return 0;
}

void swap(){
    int temp = a;
    a = b;
    b = temp;
}