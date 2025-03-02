#include <stdio.h>
#include <math.h>

float funkcje_tryg(int alfa, int funkcja);

int main()
{
    int alfa;
    int funkcja;

    printf("Podaj kat w stopniach\n");
    scanf("%d", &alfa);
    printf("Wybierz funkcje, 0 - sin, 1 - cos, 2 - tg\n");
    scanf("%d", &funkcja);
    printf("\nWynik wybranej funkcji to %f", funkcje_tryg(alfa, funkcja));
    return 0;
}

float funkcje_tryg(int alfa, int funkcja)
{
    if (funkcja == 0) return sin((alfa)*(M_PI/180));
    else if (funkcja == 1) return cos((alfa)*(M_PI/180));
    else if (funkcja == 2) {
        if (alfa % 90 == 0)
            printf("Funkcja tg nie jest okreslona dla tej wartosci alfa");
        else
            return tan((alfa)*(M_PI/180));
    }
    else printf("Bledna wartosc\n");
}
