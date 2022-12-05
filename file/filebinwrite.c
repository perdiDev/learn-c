#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char c;
    int number = 1;
    fp = fopen("weight.dat", "wb");
    if(fp == NULL) {
        printf("File tidak dapat dibuat\n");
        exit(1);
    }
    printf("Menyimpan data \n");
    srand(time(NULL));
    for(int i=0; i<10; i++){
        number = rand()%50;
        printf("%d ", number);
        putw(number, fp);
    }

    return 0;
}