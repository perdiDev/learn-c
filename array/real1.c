#include <stdio.h>

int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

int main() {
    printf("Ukuran array: %d byte\n", sizeof(arr));
    printf("Ukuran array: %d elemen\n", sizeof(arr)/sizeof(arr[0]));

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
        printf("Array elemen %d: %d \n", i, arr[i]);

    return 0;
}