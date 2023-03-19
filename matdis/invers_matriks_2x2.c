#include <stdio.h>

int main(int argc, char const *argv[]){
    int a, b, c, d, e, det;
    float adja, adjb, adjc, adjd;
    float invers, ina, inb, inc, ind;

    //Matriks
    printf("Masukkan angka a : ");
    scanf("%d", &a);
    printf("Masukkan angka b : ");
    scanf("%d", &b);
    printf("Masukkan angka c : ");
    scanf("%d", &c);
    printf("Masukkan angka d : ");
    scanf("%d", &d);
    printf("|%d\t%d|\n|%d\t%d|\n",a,b,c,d);

    //determinan
    det=(a*d)-(b*c);
    printf("Determinan = %d", det);

    //adj
    e=a;
    adja=d;
    adjb=-1*b;
    adjc=-1*c;
    adjd=e;
    printf("\n|%.0f\t%.0f|\n|%.0f\t%.0f|\n", adja,adjb, adjc,adjd);

    //Invers
    ina=1*adja/det;
    inb=1*adjb/det;
    inc=1*adjc/det;
    ind=1*adjd/det;
    printf("Invers : \n");
    printf("|%.2f\t%.2f|\n|%.2f\t%.2f|", ina, inb, inc, ind);
    return 0;
}