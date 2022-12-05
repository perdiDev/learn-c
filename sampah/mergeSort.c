#include <stdio.h>

int main(int argc, int *argv[])
{
    if(argc != 2){
        printf("I need more spesific arg");
        exit(1);
    }

    merge(argv[1]);

    return 0;
}