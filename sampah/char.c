#include <stdio.h>

int main() {
    char space = ' ';
    int satu = 1;
    char space2 = ' ';
    long dua = 1;
    char nama[10] = "perdi";
    nama[9] = 's';


    printf("%i %i %i %i %i", &space, &satu, &space2, &dua, &nama);

    return 0;
}