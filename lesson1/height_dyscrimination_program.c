#include <stdio.h>

int main()
{
    //deklaracje

    int lstudentow;
    float wzrost;

    //instrukcje

    printf("Podaj liczbe osob\n");
    scanf("%d", &lstudentow);

    while (lstudentow <= 0)
    {
        printf("Podaj poprawna liczbe studentow:\n");
        scanf("%d", &lstudentow);
    }

    while (lstudentow != 0)
    {
        printf("podaj wzrost\n");
        scanf("%f", &wzrost);

        if (wzrost < 170)
        {
            printf("Niski wzrost\n\n");
        }
        else if (wzrost < 183)
        {
            printf("sredni wzrost\n\n");
        }
        else
        {
            printf("wysoki wzrost\n\n");
        }
        lstudentow--;
    }

    return 0;
}
