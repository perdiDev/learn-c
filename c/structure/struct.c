#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct orang
{
    char website[50];
    char author[50];
    int age;
};

void main()
{
    struct orang r;
    strcpy(r.website, "www.real.com");
    strcpy(r.author, "resal");
    r.age = 19;

    printf("nama website: %s\n", r.website);
    printf("penulis     : %s\n", r.author);
    printf("umur        : %d tahun", r.age);
}
