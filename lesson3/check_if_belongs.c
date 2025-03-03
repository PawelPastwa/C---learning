#include <stdio.h>
#include <stdlib.h>

//prototyp funkcji
void czynalezy(float x, float y);

int main()
{
    float x, y;
    printf("Podaj punkt x i y\n");
    scanf("%f %f", &x, &y);
    czynalezy(x, y);
    return 0;
}


//definicja funkcji
void czynalezy(float x, float y)
{
    if (x <= 1 && x >= -1)
    {
        if (y >= -1 && y <= 1) printf("Punkt nalezy do obszaru tworzonego przez kwadrat (-1,-1),(1,-1),(1,1),(-1,1)");
        else printf("Punkt nie nalezy do obszaru tworzonego przez kwadrat (-1,-1),(1,-1),(1,1),(-1,1)");
    }
    else printf("Punkt nie nalezy do obszaru tworzonego przez kwadrat (-1,-1),(1,-1),(1,1),(-1,1)");
}
