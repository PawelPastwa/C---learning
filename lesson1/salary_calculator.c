#include <stdio.h>

int main()
{
    //deklaracje

    int pracownicy;
    float dodatek;
    float lata;
    int baza;
    float wyplata;
    float sumawyplat;

    //instrukcje

    printf("Podaj liczbe pracownikow:\n");
    scanf("%d", &pracownicy);
    while (pracownicy <= 0)
    {
        printf("Podaj poprawna liczbe pracownikow:\n");
        scanf("%d", &pracownicy);
    }
    printf("\nPodaj wartosc stawki bazowej:\n");
    scanf("%d", &baza);

    while (baza <= 0)
    {
        printf("Podaj poprawna wartosc stawki bazowej:\n");
        scanf("%d", &baza);
    }

    float wyplatapracownicy[pracownicy];
    int i = 0;
    sumawyplat = 0;
    while (pracownicy > 0)
    {
        printf("\nPodaj staz pracownika w latach:\n");
        scanf("%f", &lata);

        if (20 >= lata && lata >= 5)
        {
            dodatek = lata;
        }
        else if (lata > 20)
        {
            dodatek = 20;
        }
        else
        {
            dodatek = 0;
        }
        wyplata = baza + baza*(dodatek/100);
        sumawyplat = sumawyplat + wyplata;
        wyplatapracownicy[i] = wyplata;
        i++;

        printf("\nPracownikowi nalezy sie:\n%f", wyplata);

    pracownicy--;
    }

    printf("\nLista wyplat:\n");
    for (int j = 0; j < i; j++)
    {
        printf("%.2f\n", wyplatapracownicy[j]);
    }

    printf("\nSuma wyplat:\n%f", sumawyplat);
    return 0;
}
