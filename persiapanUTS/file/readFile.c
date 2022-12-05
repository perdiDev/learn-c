#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *fp;
    char character;
    fp = fopen("ex.txt", "r");

    if(fp == NULL) {
        printf("Tidak berhasil membaca file\n");
        exit(1);
    } else printf("File berhasil dibuka\n");

    while((character = getc(fp)) != EOF)
        printf("%c", character);

    return 0;
}