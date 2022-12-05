#include <stdio.h>

int main(){
    // char str[] = "HI!";
    // printf("ini %c", str[10]);

    char *s = "HI!";
    char *p = &s[0];
    printf("%p\n", s);
    printf("%p\n", p);

    return 0;
}