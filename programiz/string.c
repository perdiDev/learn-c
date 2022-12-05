#include <stdio.h>

int main() {
    // Deklarasi string as array of char
    char str[20];

    // Get string with spasi
    printf("Enter your name: ");
    fgets(str, sizeof(str), stdin);

    // Change the value of string 
    str[0] = '$';

    // %s as string
    printf("%s ", str);

    return 0;
}