#include <stdio.h>
#include <string.h>

int main() {
    char c;
    scanf("%c", &c);

    int kar = c - 'a' + 'A';
    printf("%c", kar);

    return 0;
}