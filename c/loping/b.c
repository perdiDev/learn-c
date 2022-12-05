#include <stdio.h>
int main()
{
    int i, j, k, n;

    printf("masukkan angka:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (k = n;k > 1; k--)
            printf("");
        for (j = 1; j <= i * 1; j++)
            printf("*");
        printf("\n");
    }
    printf("\n");
    return 0;
}
