#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *fp;
    int number = 0;
    
    fp = fopen("weight.dat", "wb");
    if(fp == NULL){
        printf("File tidak dapat diubah\n");
        exit(1);
    }
    printf("Menimpan data\n");
    srand(time(NULL));
    for(int i=0; i<10; i++){
        number = rand()%50;
        printf("%d\n", number);
        putw(number, fp);
    }
    fclose(fp);

    return 0;
}