#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lata, miesiace, zaile, wiekza;
    printf("Podaj wiek w latach i miesiacach:\n");
    scanf("%d %d", &lata, &miesiace);
    printf("Za ile miesiecy:\n");
    scanf("%d", &zaile);
    wiekza = zaile + miesiace + lata*12;
    lata = wiekza/12;
    miesiace = wiekza % 12;
    printf("Twoj wiek za %d miesiecy bedzie wynosil %d lat i %d miesiecy", zaile, lata, miesiace);


    return 0;
}
