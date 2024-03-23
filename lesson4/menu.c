#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//prototypy funkcji
float sredniaWhile(int n);
float sredniaDoWhile(int n);
void sredniaPiNP(int liczba);
void ileznakow();
void najwieksza();


int main()
{
    int nr = 1;
    while (nr)
    {
        printf("\nWpisz numer funkcji (1, 2, 3 lub 4)\nKoniec programu - wpisz 0  ");
        scanf("%d", &nr);
        getchar();
        if (nr == 1)
        {
            printf("\nWybrano funkcje srednia liczb");
            int n;

            printf("Podaj ilosc liczb:\n");
            scanf("%d", &n);
            printf("\nSredniawhile wynosi:\n%f", sredniaWhile(n));
            printf("\nSredniaDowhile wynosi:\n%f", sredniaDoWhile(n));
        }
        else if (nr == 2)
        {
            printf("\nWybrano funkcje srednia liczb parzystych i nie parzystych\nLiczba 0 konczy ciag\n");
            int liczba;
            sredniaPiNP(liczba);
        }
        else if (nr == 3)
        {
            printf("\nWyrano funkcje liczenia znakow\n");
            ileznakow();
        }
        else if (nr == 4)
        {
            najwieksza();
        }
        else
            printf("Nie ma takiego zadania");
    }
    printf("\nKoniec\n");
    return 0;
}
