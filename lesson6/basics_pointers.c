#include <stdio.h>

void zmien1(int a);
void zmien2(int* a);
void zamiana(float* b, float* c);
void suma_roznica(float* q, float* r);

int main() {

    int x = 1;
    int* wsk = &x; // & - operator adresu

    printf("x = %d, adres x = %p\n", x, &x); //%p - adres
    printf("x = %d, adres x = %p\n", *wsk, wsk); // * - operator dereferencji (odwoluje sie do wartosci, na ktora wskazuje wskaznik)


    *wsk = 2;
    printf("x = %d, adres x = %p\n", x, &x);


    zmien1(x); // przekazywanie parametru przez wartosc - funkcja pracuje na kopii
    printf("x = %d, adres x = %p\n", x, &x);

    zmien2(&x); // przekazywanie parametru przez adres - funkcja pracuje na oryginale
    printf("x = %d, adres x = %p\n", x, &x);

    float a, b;
    printf("Podaj wartosc a i b ");
    scanf("%f %f", &a, &b);
    zamiana(&a, &b);
    printf("a = %f, b = %f", a, b);

    float q, r;
    printf("Podaj wartosc a i b: ");
    scanf("%f %f", &q, &r);
    suma_roznica(&q, &r);
    printf("suma a i b = %f, roznica a i b = %f", q, r);

    return 0;
}

void zmien1(int a)
{
    printf("W funkcji zmien1 a = %d, adres a = %p\n", a, &a);
    a *= 2;
    printf("Po zmianie funkcji zmien1 a = %d, adres a = %p\n", a, &a);

}

void zmien2(int* a)
{
    printf("w funkcji zmien2 wartosc pod a = %d, adres a = %p\n", *a, a);
    *a *= 2;
    printf("Po zmianie funkcji zmien2 wartosc a = %d, adres a = %p\n", *a, a);
}

void zamiana(float* b, float* c)
{
    float pomoc = *b;
    *b = *c;
    *c = pomoc;
}

void suma_roznica(float* q, float* r)
{
    float pomoc = *q;
    *q = *q + *r;
    *r = pomoc - *r;

}
