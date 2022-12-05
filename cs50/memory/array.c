#include <stdio.h>

int main(){
    // Pointer aritmathic


    printf("Char");
    char *s = "HI!";
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));

    printf("Numbers");
    int number[] = {3, 1, 0, 5, 2, 4};
    printf("%d\n", *(number));
    printf("%d\n", *(number + 1));
    printf("%d\n", *(number + 2));
    printf("%d\n", *(number + 3));
    printf("%d\n", *(number + 4));
    printf("%d\n", *(number + 5));

    return 0;
}