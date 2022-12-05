#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char buff[255];
    char text[255];
    FILE *fp;
    fp = fopen("ex.txt", "w");

    printf("Masukkan isi file: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);
    printf("File berhasil ditulis\n");

    fclose(fp);

    return 0;
}