#include <stdio.h>
#include <stdlib.h>
#include "prototypy.h"

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
