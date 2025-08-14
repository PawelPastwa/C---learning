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
        printf("Podaj ocene z egzaminu (2-5)\n");
        scanf("%f", &x);
        while(x < 2 || x > 5)
        {
            printf("Podaj poprawna ocene (2-5):\n");
            scanf("%f", &x);
        }
        s += x;
        n--;
    }

    printf("Srednia z egzaminow wynosi: %f", s/(float)n0);

    return 0;
}
