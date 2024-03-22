#include <stdio.h>
#include "prototypes.h"

int main() {

    int a, b, c;

    printf("Podaj pierwsza dodatnia liczbe calkowita: ");
    scanf("%d", &a);
    printf("Podaj druga dodatnia liczbe calkowita: ");
    scanf("%d", &b);
    printf("Podaj trzecia dodatnia liczbe calkowita: ");
    scanf("%d", &c);

    printf("Wynik funkcji: %d", licz_jezeli(a, b, c));

    return 0;
}
