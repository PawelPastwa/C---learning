#include <stdio.h>
#include <math.h>

int main()
{
    //deklaracje
    //including door and window in the room, window 1x0.9, door 2x0.8

    float a;
    float b;
    float c;
    float sciany;
    float farba;
    float zapotrzebowanie;

    //instrukcje

    printf("Podaj wymiar pierwszy, wymiar drugi i wysokosc pokoju\n");
    scanf("%f %f %f", &a, &b, &c);
    while (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Podaj poprawne wymiary:\n");
        scanf("%f %f %f", &a, &b, &c);
    }
    sciany = 2*c*(a+b) - (1*0.9) - (2*0.8);

    printf("Podaj wartosc w m^2 na ile starcza 1 litr puszki farby\n");
    scanf("%f", &farba);
    while (farba <= 0)
    {
        printf("Podaj poprawna wartosc:\n");
        scanf("%f", &farba);
    }
    zapotrzebowanie = sciany/farba;
    zapotrzebowanie = ceilf(zapotrzebowanie);

    printf("Na pomalowanie pokoju potrzeba:\n%.0f puszek farby", zapotrzebowanie);

    return 0;
}
