#include <stdio.h>

//prototyp funkcji
void najwieksza();

int main()
{
    najwieksza();
    return 0;
}
//deklaracja funkcji
void najwieksza()
{
    float liczba, top = 0;

    while (liczba != -1)
    {
        printf("Podaj liczbe (-1 by porownac):\n");
        scanf("%f", &liczba);
        if (liczba > top) top = liczba;
    }
    printf("najwieksza liczba sposrod podanych wynosi: %f", top);
}
