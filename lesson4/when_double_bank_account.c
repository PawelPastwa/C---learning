#include <stdio.h>
#include <stdlib.h>

int kiedy_stan_konta_2x(float* wplata, float oprocentowanie, int opcja);

int main() {

    float oprocentowanie;
    float *wplata;
    int opcja;

    wplata = (float*)malloc(sizeof(float));

    printf("Podaj wartosc wplaty: ");
    scanf("%f", wplata);
    printf("Podaj wartosc oprocentowania (w %): ");
    scanf("%f", &oprocentowanie);
    printf("Podaj opcje oprocentowania:\n1 - co miesiac\n2 - co kwartal\n3 - co rok\n");
    scanf("%d", &opcja);

    oprocentowanie = oprocentowanie / 100;

    printf("Najwczesniej twoj stan konta zostanie podwojony za %d miesiecy\n", kiedy_stan_konta_2x(wplata, oprocentowanie, opcja));
    printf("Jego wartosc wyniesie: %f", *wplata);

    free(wplata);

    return 0;
}

int kiedy_stan_konta_2x(float* wplata, float oprocentowanie, int opcja)
{
    float wplata_poczatkwa = *wplata;
    int czas = 0;

    while (*wplata < 2*wplata_poczatkwa)
    {
        if (opcja == 1)
        {
            czas++;
            *wplata += *wplata*oprocentowanie;
        }
        else if (opcja == 2)
        {
            czas++;
            if (czas % 4 == 0)
                *wplata += *wplata*oprocentowanie;
        }
        else if (opcja == 3)
        {
            czas++;
            if (czas % 12 == 0)
                *wplata += *wplata*oprocentowanie;
        }

    }
    return czas;
}
