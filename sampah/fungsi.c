#include <stdio.h>

int main(){
    int score1= 72;
    int score2= 73;
    int score3= 33;

    int sum = score1 + score2 + score3;
    float average = (float) sum / 3;

    printf("The average is: %.2f\n", average);

    return 0;
}