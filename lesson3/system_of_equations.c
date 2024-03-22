#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//prototypy funkcji
//zad.5.3
float obliczanieif(int t, float alpha);
float obliczanieswitch(int t, float alpha);

int main()
{
  
    int t;
    float alpha;

    printf("Podaj t\n");
    scanf("%d", &t);
    //zad 5.3
    printf("\nPodaj kat\n");
    scanf("%f", &alpha);
    printf("Obliczenie w if wynosi: %f\nObliczanie w switch wynosi: %f", obliczanieif(t, alpha), obliczanieswitch(t, alpha));
    return 0;
    
}
//definicja funkcji
//zad.5.3

float obliczanieif(int t, float alpha)
{
    if (t = 8) return 1-sin(alpha);
    else if (t == 0 || t == 1 || t == 2 || t == 3) return (1.0/2)*(1 + cos(alpha));
    else if (t == 4 || t == 6 || t == 7) return sqrt(pow(alpha, 2) + 1);
    else printf("Zla wartosc t");
}
float obliczanieswitch(int t, float alpha)
{
    switch (t)
    {

case 0:
case 1:
case 2:
case 3:
    return (1.0/2)*(1 + cos(alpha)); break;
case 4:
case 6:
case 7:
    return sqrt(pow(alpha, 2) + 1); break;
case 8:
    return 1 - sin(alpha); break;
    default: printf("Zla wartosc t");
    }
}
