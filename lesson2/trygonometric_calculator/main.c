#include <stdio.h>
#include <stdlib.h>
#include "prototypy.h"
#include "definicje.c"

int main()
{
    float alfa;
    int funkcja;

    printf("Podaj kat w stopniach\n");
    scanf("%f", &alfa);
    printf("Wybierz funkcje, 0 - sin, 1 - cos, 2 - tg\n");
    scanf("%d", &funkcja);
    printf("\nWynik wybranej funkcji to %f", funkcje_tryg(alfa, funkcja));
    return 0;
}
