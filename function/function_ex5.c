#include <stdio.h>

void tukar(int a, int b);

int main(int argc, char *argv[]){
    int a, b;
    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);

    printf("Sebelum di tukar a = %d, b = %d\n", a, b);

    tukar(a, b);

    return 0;
}

void tukar(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    
    printf("Setelah di tukar a = %d, b = %d\n", a, b);
}