#include<stdio.h>
#include<stdlib.h>

int main( int argc, char *argv[]){
    int a ;
    int b ;

    if (argc < 3)
    {
        printf("program kurang, input dua integer! \n");
        return -1;
    }
     a = atoi(argv[1]);
     b = atoi(argv[2]);
    printf("%d + %d = %d\n",a,b,a+b);
return 0;
}
