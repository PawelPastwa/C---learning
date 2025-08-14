#include <stdio.h>


int main()
{
    //deklaracje

    int n;
    float s = 0;
    float x;

    //instrukcje

    printf("Podaj liczbe egzaminow:\n");
    scanf("%d", &n);
    while (n <= 0)
    {
        printf("Podaj poprawna liczbe egzaminow:\n");
        scanf("%d", &n);
    }

    int n0 = n;

    while(n != 0)
    {
        printf("Podaj ocene z egzaminu\n");
        scanf("%f", &x);
        s += x;
        n--;
    }

    printf("Srednia z egzaminow wynosi: %f", s/n0);

    return 0;
}
