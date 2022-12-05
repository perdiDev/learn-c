#include <stdio.h>
#include <string.h>

int main(){

    // That doesn't work because that's different chunks from
    char s[10], t[10];
    printf("Input s: ");
    scanf("%s", &s);
    printf("Input t: ");
    scanf("%s", &t);

    // But we can compare use library function from string library
    printf("%d\n",strcmp(s, t));
    // s and t is a pointer
    if(s == t) {
        printf("Same\n");
    }
    else printf("Different\n");

    return 0;
}