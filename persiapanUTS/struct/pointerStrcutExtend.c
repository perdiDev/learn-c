#include <stdio.h>
#include <stdlib.h>

struct Player {
    char *name;
    int hp;
};

int main(int argc, int argv[]){
    struct Player *player1 = malloc(2*sizeof(struct Player));

    player1[0].name = "Perdi Men";
    player1[1].name = "Minteng Men";

    for(int i=0;i<2; i++){
        printf("%s\n", player1[i].name);
    }

    return 0;
}