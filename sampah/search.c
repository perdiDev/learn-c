#include <stdio.h>

int main(void) {
    int numbers[] = {4, 6, 8, 7, 2, 0};

    for(int i=0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
        if(numbers[i] == 1) {
            printf("Found\n");
            return 0;
        }
    }
    return 1;
}