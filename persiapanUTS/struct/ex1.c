#include <stdio.h>

// Inisialisasi cara pertama
struct Student {
    int nim;
    int age;
};

struct {
    int nip;
    int age;
} Dosen;

int main(int argc, char *argv[]){
    struct Student perdi;
    perdi.nim = 15;
    perdi.age = 17;
    printf("Nim: %d\n",perdi.nim);
    printf("Age: %d\n",perdi.age);

    Dosen.nip = 10;
    Dosen.age = 30;
    printf("Nip: %d\n",Dosen.nip);
    printf("Age: %d\n",Dosen.age);

    return 0;
}