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
    float sciany;
    float farba;
    float zapotrzebowanie;

    //instrukcje

    printf("Podaj wymiar pierwszy, wymiar drugi i wysokosc pokoju\n");
    scanf("%f %f %f", &a, &b, &c);
    sciany = a*c*2 + b*c*2 - (1*0.9) - (2*0.8);

    printf("Podaj wartosc w m^2 na ile starcza 1 litr puszki farby\n");
    scanf("%f", &farba);
    zapotrzebowanie = sciany/farba;
    zapotrzebowanie = ceil(zapotrzebowanie);

    printf("Na pomalowanie pokoju potrzeba:\n%f puszek farby", zapotrzebowanie);

    return 0;
}
