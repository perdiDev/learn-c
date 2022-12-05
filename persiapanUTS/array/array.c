#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int *array;
    array = (int *)malloc(4*sizeof(int));

    for(int i=0; i<4; i++)
        array[i] = i+1;
    
    for(int i=0; i<4; i++)
        printf("array %d = %d\n", i, array[i]);

    return 0;
}