#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *fp;
    char *filename;
    int number;
    if(argc <  2){
        printf("Argumen kurang! Tambahkan nama file pada argumen kedua\n");
        exit(1);
    }
    
    filename = argv[1];
    fp = fopen(filename, "rb");
    if(fp == NULL) {
        printf("Gagal memuat file\n");
        exit(1);
    }
    printf("Memuat file...\n");
    while(1){
        number = getw(fp);
        if(number == EOF)
            break;
        printf("%d ", number);
    }
    fclose(fp);

    return 0;
}