#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//prototyp funkcji
void sredniaPiNP(int liczba);

int main()
{
    int liczba;
    sredniaPiNP(liczba);
    return 0;
}
void sredniaPiNP(int liczba)
{
    int licznikp, liczniknp;
    float sumap = 0, sumanp = 0, sredniap = 0, srednianp = 0;
    licznikp = 0;
    sumanp = 0;
    sumap = 0;

    do
    {
        printf("Podaj liczbe:\n");
        scanf("%d", &liczba);
        if (liczba % 2 == 0)
        {
            sumap += liczba;
            licznikp++;
        }
        else
        {
            sumanp += liczba;
            liczniknp++;
        }
    }
    while (liczba != 0);
    sredniap = sumap/licznikp;
    srednianp = sumanp/liczniknp;
    printf("Srednia liczb parzystych wynosi: %f\nSrednia liczb nieparzystych wynosi: %f", sredniap, srednianp);
}
