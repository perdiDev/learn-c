#include <stdio.h>

struct Player {
    char *name;
    int hp;
};

int main(int agrc, char *agrv[]){
    struct Player ml[1];

    ml[0].name = "Naruto";
    ml[0].hp = 200;

    // printf("Player 1: %s\n", ml[0].name);
    printf("Player 2: %s\n", ml[0].name);

    return 0;
}