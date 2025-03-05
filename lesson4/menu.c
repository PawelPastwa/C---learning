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

void sredniaPiNP(int liczba) {
    int licznikp = 0, liczniknp = 0;
    float sumap = 0, sumanp = 0, sredniap = 0, srednianp = 0;

    do {
        printf("Podaj liczbe:\n");
        scanf("%d", &liczba);
        if (liczba % 2 == 0 && liczba != 0) {
            sumap += liczba;
            licznikp++;
        } else if (liczba % 2 != 0) {
            sumanp += liczba;
            liczniknp++;
        }
    } while (liczba != 0);
    sredniap = sumap / licznikp;
    srednianp = sumanp / liczniknp;
    if (sumap == 0 && sumanp == 0)
        printf("Nie podano zadnych liczb\n");
    else if (sumap == 0)
        printf("Nie podano liczb parzystych\nSrednia liczb nieparzystych wynosi: %f\n", srednianp);
    else if (sumanp == 0)
        printf("Srednia liczb parzystych wynosi: %f\nNie podano liczb nieparzystych\n", sredniap);
    else
        printf("Srednia liczb parzystych wynosi: %f\nSrednia liczb nieparzystych wynosi: %f\n", sredniap, srednianp);
}

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

float sredniaWhile(int n) {
    int suma, liczba, licznik;
    licznik = n;
    suma = 0;
    while (n > 0) {
        printf("Podaj liczbe:\n");
        scanf("%d", &liczba);
        suma += liczba;
        n--;
    }
    return (suma / (float) licznik);
}
float sredniaDoWhile(int n)
{
    int suma, liczba, licznik;
    licznik = n;
    suma = 0;
    do
    {
        printf("Podaj liczbe:\n");
        scanf("%d", &liczba);
        suma += liczba;
        n--;
    } while (n > 0);
    return (suma/(float)licznik);
}

void najwieksza()
{
    float liczba, top = 0;

    while (liczba != -1)
    {
        printf("Podaj liczbe:\n");
        scanf("%f", &liczba);
        if (liczba > top) top = liczba;
    }
    printf("najwieksza liczba sposrod podanych wynosi: %f", top);
}
