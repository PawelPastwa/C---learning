#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    //deklaracje
    float a;
    float b;
    float c;
    float delta;
    float x1;
    float x2;

    //instrukcje
    printf("Podaj wspolczynniki a, b i c wzor: ax^2 + bx +c\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0) 
        printf("to nie jest funkcja kwadratowa");
    else 
    {
        delta = (b * b) - (4 * a * c);
        if (delta > 0) 
        {
            x1 = ((-b - sqrt(delta)) / (2 * a));
            x2 = ((-b + sqrt(delta)) / (2 * a));
            printf("Rownanie ma 2 pierwiastki:\nx1 = %f\nx2 = %f", x1, x2);
        } 
        else if (delta == 0) 
        {
            x1 = (-b) / (2 * a);
            x2 = x1;
            printf("Rownanie ma jeden pierwiastek\nx = %f", x1);
        } 
        else 
        {
            printf("To rownanie nie ma pierwiastkow rzeczywistych");
        }
    }
    return 0;
}
