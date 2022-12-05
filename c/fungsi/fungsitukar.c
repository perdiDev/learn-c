#include<stdio.h>
#include<stdlib.h>

void swap( int a, int b);

int main(int argc,char*argv[]){
    int a;
    int b;
    printf("input a: ");
    scanf("%d",&a);
    printf("input b: ");
    scanf("%d",&b);
    swap(a,b);
    printf("sebelum ditukar a: %d dan b : %d\n",a,b);

    return 0;
}

void swap( int a, int b){
   int  temp = a ;
     a = b ;
     b = temp;
     printf("setelah ditukar a: %d dan b : %d\n",a,b);
}

