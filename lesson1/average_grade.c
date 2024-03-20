#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //deklaracje

    int n;
    float s = 0;
    float x;
    int n0;

    //instrukcje

    printf("Podaj liczbe egzaminow\n");
    scanf("%d", &n);

    n0 = n;

    while(n != 0)
        {
        printf("Podaj ocene z egzaminu\n");
        scanf("%f", &x);
        s = s + x;
        n -= 1;
        }

    if (n0 != 0)
    {
        s = s / n0;
        printf("Srednia z egzaminow wynosi:\n %f", s);
    }
    else
    {
        printf("Nie podano zadnych occen");
    }

    return 0;
}
