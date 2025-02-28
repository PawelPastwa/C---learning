#include <stdio.h>
#include <math.h>

float a(float x);
float b(float x);
float c(float alfa);
float d(float beta);

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

float a(float x)
{
    return 10*cos(x) - 0.1*pow(x, 2) + sin(x) + sqrt(4*pow(x, 2) + 7);
}

float b(float x)
{
    return log10(x+5) + exp(x+1) - fabs(tan(x) + 1);
}

float c(float alfa)
{
    return (pow(sin(alfa), 2) + 0.5)/(cos(pow(alfa, 4)) + pow(tan(pow(alfa, 2)), 4));
}

float d(float beta)
{
    return sqrt((fabs(5*sin(pow(beta, 5)) + 1))/(3.5*pow(sin(beta) + cos(beta), 2)));
}
