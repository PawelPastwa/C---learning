#include <stdio.h>

void lokaty(double x, double p1, double p2, double* wynik_p1, double* wynik_p2);

int main() {

    double p1, p2, x;
    printf("Podaj ile % wynosi wartosc lokaty polrocznej:\n");
    scanf("%lf", &p1);
    printf("Podaj ile % wynosi wartosc lokaty roczna:\n");
    scanf("%lf", &p2);
    printf("Podaj kwote wplaty:\n");
    scanf("%lf", &x);

    double  wynik_p1, wynik_p2;

    lokaty(x, p1, p2, &wynik_p1, &wynik_p2);

    printf("Wyplata po roku dla lokaty polrocznej wynosi %.2f zl\n", wynik_p1);
    printf("Wyplata po roku dla lokaty rocznej wynosi %.2f zl", wynik_p2);

    return 0;
}

void lokaty(double x, double p1, double p2, double* wynik_p1, double* wynik_p2){
    *wynik_p1 = x*(1+p1/200);
    *wynik_p1 = *wynik_p1*(1+p1/200);
    *wynik_p2 = x*(1+p2/100);
}
