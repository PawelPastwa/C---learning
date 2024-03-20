#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //deklaracje
    float a, b, c, d, r, h, pps, ppp, ppw, os, op, ow;

    //instrukcje

    printf("Podaj bok szescianu\n");
    scanf("%f", &a);
    os = a*a*a;
    pps = 6*a*a;
    printf("\nObjetosc szescianu wynosi: %f\nPole powierzchni szescianu wynosi: %f\n", os, pps);
    printf("\nPodaj boki i wysokosc prostopadloscianu\n");
    scanf("%f %f %f", &b, &c, &d);
    ppp = 2*(b*c+b*d+c*d);
    op = b*c*d;
    printf("\nObjetosc prostopadloscianu wynosi: %f\nPole powierzchni prostopadloscianu wynosi: %f\n", op, ppp);
    printf("\nPodaj promien i wysokosc walca\n");
    scanf("%f %f", &r, &h);
    ow = M_PI*pow(r, 2)*h;
    ppw = 2*M_PI*r*(h+r);
    printf("Objetosc walca wynosi: %f\nPole powierzchni walca wynosi: %f", ow, ppw);





    return 0;
}
