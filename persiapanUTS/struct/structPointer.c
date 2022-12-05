#include <stdio.h>
#include <stdlib.h>

struct Player {
    char *name;
    unsigned int hp;
    unsigned int xp;
    unsigned int level;
};

int main(int argc, char *argv[]){
    struct Player *player1 = malloc(sizeof(struct Player));

    player1->name = "Perdi Men";
    player1->hp = 100;
    player1->xp = 1000;
    player1->level = 12;

    printf("Nama: %s\n", player1->name);
    printf("hp: %d\n", player1->hp);
    printf("xp: %d\n", player1->xp);
    printf("level: %d\n", player1->level);

    return 0;
}