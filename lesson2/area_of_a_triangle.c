#include <stdio.h>
#include <stdlib.h>

//prototyp funkcji
void poleTrojkata(float a, float b, float c);

int main()
{
    float a, b, c;
    printf("Podaj boki trojkata:\n");
    scanf("%f %f %f", &a, &b, &c);
    poleTrojkata(a, b, c);
    return 0;
}
//deklaracja funkcji
void poleTrojkata(float a, float b, float c)
{
    float p, P;
    if (a + b > c && a + c > b && c + b > a)
    {
        p = (a + b + c)/2;
        P = sqrt(p*(p - a)*(p - b)*(p - c));
        printf("Pole trojkata wynosi: %f", P);
    }
    else
        printf("To nie jest trojkat\n");
}
