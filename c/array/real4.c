#include<stdio.h>
#include<stdlib.h>
int main()
{
int **array2D;

array2D=(int **)malloc(4*sizeof(int *));

for(int row=0;row<4;row++)
    array2D[row]=(int *)malloc(4*sizeof(int));

for(int row=0;row<4;row++) {
    for(int col=0;col<4;col++)
        array2D[row][col]=col+row*4;
}

for(int row=0;row<4;row++)
{
    for(int col=0;col<4;col++)
        printf("%d\t",array2D[row][col]);
    printf("\n");
}
return 0;
}