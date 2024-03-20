#include <stdio.h>
#include <stdlib.h>
#include "prototypy.h"
#include "definicje.c"

int main()
{
    int pensja, staz;

    printf("Podaj pensje pracownika:\n");
    scanf("%d", &pensja);
    printf("Podaj staz pracownika:\n");
    scanf("%d", &staz);

    printf("Pensja pracownika wynosi: %f", wyplata(pensja, staz));


    return 0;
}
