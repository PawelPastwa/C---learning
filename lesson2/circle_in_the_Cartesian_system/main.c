#include <stdio.h>
#include <stdlib.h>
#include "prototypy.h"
#include "definicje.c"

int main()
{
    float x1, y1, x2, y2;

    printf("Podaj wspolzedne srodka okregu\n");
    scanf("%f\n%f", &x1, &y1);
    printf("Podaj wspolzedne punktu przez ktory przechodzi ten okrag\n");
    scanf("%f\n%f", &x2, &y2);

    printf("Obwod okregu o wspolrzednych srodka: %f %f, przechodzacego przez punkt: %f %f\nwynosi: %f", x1, y1, x2, y2, ok(x1, y1, x2, y2));
    return 0;
}
