#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *fp;
    char text[255];
    fp = fopen("text.txt", "w");

    if(fp == NULL) {
        printf("File gagal dimuat!\n");
        exit(1);
    } else printf("File berhasil dimuat!\n");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);


    return 0;
}