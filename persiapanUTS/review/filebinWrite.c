#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *fp;
    int number;
    fp = fopen("weight.dat", "wb");

    printf("Membuat file\n");

    srand(time(NULL));
    for(int i=0; i<10; i++){
        number = rand()%50;
        printf("%d ", number);
        putw(number, fp);
    }
    fclose(fp);

    return 0;
}