#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char s[10];
    printf("s: ");
    scanf("%s", &s);

    char *t = malloc(strlen(s)+1);
    // Check my memory
    if(t == NULL)
        printf("No memory");

    // Copy each element of s
    for(int i=0, n = strlen(s)+1; i<n; i++)
        t[i] = s[i];
    
    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // Free momory that doesn't use
    free(t);
    return 0;
}