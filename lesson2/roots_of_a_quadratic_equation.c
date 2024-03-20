#include <stdio.h>
#include <stdlib.h>

//prototyp funkcji
void pierwiastekRK(float a, float b, float c);

int main()
{
    float a, b, c;
    printf("podaj wspolczynnik przy x^2\n");
    scanf("%f", &a);
    printf("podaj wspolczynnik przy x\n");
    scanf("%f", &b);
    printf("podaj wyraz wolny\n");
    scanf("%f", &c);
    pierwiastekRK(a, b, c);

    return 0;
}

//deklaracje funkcji
void pierwiastekRK(float a, float b, float c)
{
    if (a == 0) (printf("to nie jest rownanie kwadratowe"));
    else
    {
        float x1, x2, delta;
        delta = pow(b, 2) - 4*a*c;
        if (delta == 0)
        {
            x1 = (-b)/(2*a);
            printf("to rownanie ma 1 pierwiastek podwojny przyjmujacy wartosc %f\n", x1);
        }
        else if (delta < 0) (printf("to rownanie nie ma pierwiastkow rzeczywistych\n"));
        else
        {
            x1 = ((-b) - sqrt(delta))/(2*a);
            x2 = ((-b) + sqrt(delta))/(2*a);
            printf("Funkcja ma dwa pierwiastki, x1 = %f, x2 = %f\n", x1, x2);
        }
    }
}
