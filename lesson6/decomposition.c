#include <stdio.h>

float dekompinacja(float* a, float* b, float* c);

int main() {

    float a, b ,c;
    printf("Podaj 3 liczby rzeczywiste:\n");
    scanf("%f %f %f", &a, &b, &c);
    dekompinacja(&a, &b, &c);
    printf("%f", c);

    return 0;
}

float dekompinacja(float* a, float* b, float* c)
{
    float reszta1, reszta2, reszta3;
    int calosc1, calosc2, calosc3;

    calosc1 = (int)*a;
    reszta1 = *a - calosc1;
    calosc2 = (int)*b;
    reszta2 = *b - calosc2;
    calosc3 = (int)*c;
    reszta3 = *c - calosc3;
    *c = calosc1;

    printf("Rozklad liczby 1: %d %f\nRozklad liczby 2: %d %f\nRozklad liczby 3: %d %f", calosc1, reszta1, calosc2, reszta2, calosc3, reszta3);
    return *a;
}
