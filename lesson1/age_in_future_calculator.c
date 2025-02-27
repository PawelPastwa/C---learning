#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void wiekza();

int main()
{

    wiekza();

    return 0;
}
//funkcja

wiekza()
{
    int miesiace;
    int lata;
    int zaile;
    int summiesiace;
    int wiekkoncowy;
    int miesiacekoniec;
    int latakoniec;

    printf("Podaj swoj wiek w latach i miesiacach\n");
    scanf("%d %d", &lata, &miesiace);

    if (miesiace > 12 || miesiace < 0)
    {
        printf("podaj miesiace z przedzialu <0,11>");
    }
    else
    {
    summiesiace = lata*12 + miesiace;
    printf("Za ile miesiecy\n");
    scanf("%d", &zaile);
    wiekkoncowy = summiesiace + zaile;
    latakoniec = wiekkoncowy / 12;
    miesiacekoniec = wiekkoncowy % 12;

    printf("\nTwoj wiek za %d mieisecy bedzie wynosic:\n%d lat\n%d miesiecy", zaile, latakoniec, miesiacekoniec);
    }
}
