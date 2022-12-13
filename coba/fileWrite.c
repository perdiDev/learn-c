#include <stdio.h>

int main(int argc, char *argv[]){
    char text[255];
    FILE *fp;
    fp = fopen("text.txt", "w");

    printf("Ketikkan isi file yang ingin ditulis\n");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    printf("Berhasil membuat file\n");
    fclose(fp);

    return 0;
}