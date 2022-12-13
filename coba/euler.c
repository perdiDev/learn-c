#include <stdio.h>
#include <math.h>

double euler(int x);
double factorial(int x);

int main()
{
    int n;
    double e = 1;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    printf("Aproksimasi bilangan euler adalah: %.48lf", euler(n));

    return 0;
}

double euler(int x)
{
    if (x == 0)
    {
        return 1;
    }

    return 1.0 / factorial(x) + euler(x - 1);
}

double factorial(int x)
{
    if (x == 0)
    {
        return 1;
    }

    return x * factorial(x - 1);
}