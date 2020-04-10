#include <stdio.h>

typedef struct Coordonnes Coordonnes;
struct Coordonnes
{
    int x;
    int y;
};

int main(void)
{
    Coordonnes coord;
    coord.x = 1;
    coord.y = 8;

    printf("%d\n",coord.x);
    printf("%d",coord.y);
    return (0);
}