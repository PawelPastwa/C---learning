#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //deklaracje

    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
    float g;
    float os;
    float pps;
    float op;
    float ppp;
    float ppk;
    float ok;
    float ow;
    float ppw;



    //instrukcje

    printf("Podaj dlugosc boku szescianu\n");
    scanf("%f", &a);
    os = a*a*a;
    pps = a*a*6;

    printf("Podaj dlugosc bokow prostopadloscianu\n");
    scanf("%f %f %f", &b, &c, &d);
    op = b*c*d;
    ppp = b*c*2 + b*d*2 + c*d*2;

    printf("Podaj promien kuli\n");
    scanf("%f", &e);
    ppk = 4*M_PI*e*e;
    ok = (4/3.0)*M_PI*pow(e, 3);

    printf("Podaj promien i wysokosc walca\n");
    scanf("%f %f", &f, &g);
    ow = M_PI*(f*f)*g;
    ppw = 2*M_PI*f*g + 2*M_PI*(f*f);

    printf("Objetosc szescianu wynosi:\n%f\nPole powierzchni szescianu wynosi:\n%f\n\nObjetosc prostopadloscianu wynosi:\n%f\nPole powierzchni prostopadloscianu wynosi:\n%f\n\nObjetosc kuli wynosi:\n%f\nPole powierzcni kuli wynosi:\n%f\n\nObjetosc walca wynosi:\n%f\nPole powierzchni walca wynosi:\n%f", os, pps, op, ppp, ok, ppk, ow, ppw);

    return 0;
}
