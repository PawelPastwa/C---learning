#include <stdio.h>

void kiedy_stan_konta_2x(float wplata, float oprocentowanie, int opcja);

int main() {

    float oprocentowanie;
    float wplata;
    int opcja;

    printf("Podaj wartosc wplaty:\n");
    scanf("%f", &wplata);
    while(wplata < 0)
    {
        printf("Podaj poprawna wartosc wplaty:\n");
        scanf("%f", &wplata);
    }
    printf("Podaj wartosc oprocentowania (w %):\n");
    scanf("%f", &oprocentowanie);
    while(oprocentowanie <= 0)
    {
        printf("Podaj poprawne oprocentowanie (w %):\n");
        scanf("%f", &oprocentowanie);
    }
    printf("Podaj opcje oprocentowania:\n1 - co miesiac\n2 - co kwartal\n3 - co rok\n");
    scanf("%d", &opcja);
    while(opcja < 1 || opcja > 3)
    {
        printf("Wybierz poprawna opcje:\n1 - co miesiac\n2 - co kwartal\n3 - co rok\n");
        scanf("%d", &opcja);
    }

    oprocentowanie = oprocentowanie / 100;

    kiedy_stan_konta_2x(wplata, oprocentowanie, opcja);

    return 0;
}

void kiedy_stan_konta_2x(float wplata, float oprocentowanie, int opcja)
{
    float wplata_poczatkwa = wplata;
    int czas = 0;

    while (wplata < 2*wplata_poczatkwa)
    {
        if (opcja == 1)
        {
            czas++;
            wplata += wplata*oprocentowanie;
        }
        else if (opcja == 2)
        {
            czas++;
            if (czas % 3 == 0)
                wplata += wplata*oprocentowanie;
        }
        else if (opcja == 3)
        {
            czas++;
            if (czas % 12 == 0)
                wplata += wplata*oprocentowanie;
        }
    }
    printf("Najwczesniej twoj stan konta zostanie podwojony za %d msc\n Jego wartosc wyniesie: %f", czas, wplata);
}
