#include <stdio.h>

int main() {
    int a = 50;

    // printf("%d", a);
    // printf("%d", &a);
    // printf("%p", &a);

    int *p = &a;
    printf("%p", p);

    return 0;
}