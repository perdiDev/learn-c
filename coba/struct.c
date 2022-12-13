#include <stdio.h>
#include <stdlib.h>

// Cara pertama
// struct Users {
//     char *name;
//     int umur;
// };

// Cara kedua
// struct {
//     char *name;
//     int umur;
// } user1;

// Cara ketiga
typedef struct {
    char *name;
    int umur;
} Users;

int main(int argc, int *argv[]){
    Users *user2 = (Users *)malloc(3 * sizeof(Users));
    Users user1;
    user1.name = "Perdi";
    user1.umur = 15;
    
    printf("%s\n", user1.name);
    printf("%d\n", user1.umur);


    return 0;
}