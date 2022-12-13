#include <stdio.h>
#include <stdlib.h>

int main(int agrc, char *argv[]){
    int *ptr;
    int a = 10;
    ptr = &a;

    printf("%p\n", ptr);
    printf("%p\n", &a);
    printf("%d\n", *ptr);

    printf("=====\n");

    int *ptr_malloc;
    // ptr_malloc = malloc(sizeof(int));
    *ptr_malloc = 33;

    printf("%d", *ptr_malloc);

    return 0;
}