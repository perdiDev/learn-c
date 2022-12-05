#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char character;
    char buffer[156];
    int index;
    fp = fopen("data.txt","w");
    if (fp == NULL){
        puts("file tidak dapat dibuat");
        exit(1);
    }
    printf("masukkan sebuah karakter : ");
    scanf("%s",buffer);
    index=0;
    while(buffer[index]!=0){
        character=buffer[index];
        fputs(character, fp);
        index++;
    }
    fclose(fp);
    printf("data telah disimpan.silahkan diperiksa ");

    return 0;
}
