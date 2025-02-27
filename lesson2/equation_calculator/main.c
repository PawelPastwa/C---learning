#include <stdio.h>
#include "prototypy.h"

int main()
{
    float x;
    float alfa;
    float beta;
    printf("Podaj x:\n");
    scanf("%f", &x);
    printf("Podaj alfe:\n");
    scanf("%f", &alfa);
    printf("Podaj bete:\n");
    scanf("%f", &beta);
    printf("Wynik rownania a to %f\n", a(x));
    printf("wynik rownania b to %f\n", b(x));
    printf("Wynik rownania c to %f\n", c(alfa));
    printf("Wynik rownania d to %f\n", d(beta));

    return 0;
}
