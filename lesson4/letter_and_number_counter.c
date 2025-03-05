#include <stdio.h>
#include <stdlib.h>

//prototyp funkcji

void ileznakow();

int main()
{
    ileznakow();
    return 0;
}

//deklaracja funkcji

void ileznakow()
{
    char litera, znak;
    int ilecyfr = 0, ileliter = 0;

    printf("Podaj litere ktorej szukasz:\n");
    scanf("%c", &litera);
    printf("Wpisz zdanie zakonczone kropka:\n");

    do
    {
        scanf("%c", &znak);
        if (znak >= '0' && znak <= '9') ilecyfr++;
        if (znak == litera) ileliter++;
    }
    while (znak != '.');

    printf("Litera '%c' wystapila w zdaniu %d razy, liczba cyfr: %d\n", litera, ileliter, ilecyfr);
}
