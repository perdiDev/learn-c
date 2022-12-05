#include <stdio.h>
int main()
{
    int array2D[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {1, 2, 3, 4}};
    int irriy2D[3][4] = {{2, 2, 2, 2}, {2, 2, 2, 2}, {2, 2, 2, 2}};
    int c[3][4];
    printf("array2D\n");
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
            printf("%d\t", array2D[row][col]);
        printf("\n");
    }
  
    printf("irriy2D\n");
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++){
            printf("%d\t", irriy2D[row][col]);
            c[row][col]=array2D[row][col] + irriy2D[row][col];
        }
        printf("\n");
    }

    
printf("hasil penjumlahan array dan irriy!!\n");
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
            printf("%d\t", c[row][col]);
        printf("\n");
    }

    return 0;
}