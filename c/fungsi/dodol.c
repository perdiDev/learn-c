#include<stdio.h>

int addision( int *num1, int *num2);
int totalValueofArray(int numberArray[],int size);

int main(){
    int mynumberArray[6]={23,30,21,18,17,25};
    int sum = totalValueofArray(mynumberArray,6);
    printf("the total value is : %d\n",sum);
    return 0;
}

int totalValueofArray(int numberArray[],int size){
    int total = 0;
    for(int i = 0;i<size;i++){
        total += numberArray[i];
    }
    return total;
}