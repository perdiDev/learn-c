#include<stdio.h>


int main(int argc,char *argv[]){
   if (argc < 2){
        printf("parameter program kurang, ketikkan nama anda: ");
        return 0;
   }
    printf("ini program %s\n",argv[0]);
    printf("hai bang %s\n",argv[1]);
return 0;
}