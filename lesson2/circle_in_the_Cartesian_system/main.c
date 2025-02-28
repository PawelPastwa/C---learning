#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float ok(float x1, float y1, float x2, float y2);

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

float ok(float x1, float y1, float x2, float y2)
{
    float promien, ok;

    promien = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    return 2*M_PI*promien;
}
