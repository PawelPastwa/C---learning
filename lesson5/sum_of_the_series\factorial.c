#include <stdio.h>
#include <math.h>

//prototyp
float sumaszeregu(float x, int K);
float silnia(float u);

int main() {

    float x;
    int K;

    printf("Podaj x: ");
    scanf("%f", &x);
    printf("Podaj ilosc skladnikow sumy: ");
    scanf("%d", &K);

    printf("sin(x) dla %d skladnikow sumy wynosi: %f", K, sumaszeregu(x, K));

    return 0;
}

//definicja
float sumaszeregu(float x, int K)
{
    int i;
    float suma = 0;
    float g = 0;
    for (i = 0; i <= K; i++)
    {
        g = 2*i + 1;
        suma += ((pow(-1, i)/silnia(g))*pow(x, (2*i + 1)));
    }
    return suma;
}
float silnia(float u)
{
    int i, wynik = 1;
    for (i = 1; i <= u; i++)
    {
        wynik *= i;
    }
    return wynik;
}
