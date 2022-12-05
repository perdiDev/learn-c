#include <stdio.h>

void draw(int h);

int main(int argc, char *argv[]){
    int height;
    scanf("%d", &height);

    draw(height);

    return 0;
}

void draw(int h)
{
    if(h==1)
        printf("#\n");
    else
    {
        draw(h-1);
        for(int i=0; i<h; i++)
            printf("#");
        printf("\n");
    }
}