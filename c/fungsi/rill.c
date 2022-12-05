#include<stdio.h>
#include<stdlib.h>

int maximum(int a,int b);

int main(int argc,char*argv)
{
    int a;
    int b;
    printf("input a : ");
    scanf("%d",&a);
    printf("input b : ");
    scanf("%d",&b);
    printf("nilai paling besar adalah : %d \n",maximum(a,b));

    return 0;
}

int maximum( int a,int b)
{
    if (a>b)
     return a;
    if (b>a)
     return b;
    return 0;
}
