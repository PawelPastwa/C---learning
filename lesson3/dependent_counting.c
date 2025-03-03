#include <stdio.h>

int licz_jezeli(int a, int b, int c);

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

int licz_jezeli(int a, int b, int c){

    if (a % 2 == 0 && b % 2 == 0 && c % 2 == 0)
        return a+b+c;
    else if (a == 1 || b == 1 || c == 1)
        return a*b*c;
    else return -1;
}
