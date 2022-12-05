#include <stdio.h>

int max(int a, int b);

int main(int argc, int *argv[]){
    int a, b;
    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);

    printf("Nilai terbesar adalah %d\n", max(a, b));

    return 0;
}

int max(int a, int b){
    if(a >= b)
        return a;
    else return b;
}