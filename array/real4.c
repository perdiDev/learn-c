#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int *ptr;
    int n;

    scanf("%d", &n);

    ptr = (int *)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        ptr[i] = i;
        printf("%d ", &ptr[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    

    return 0;
}