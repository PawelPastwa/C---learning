#include <stdio.h>

float zamowienie(float* cena, int ilosc);

int main() {

    float cena;
    int ilosc;

    printf("Podaj ilosc sztuk:\n");
    scanf("%d", &ilosc);
    printf("Podaj cene 1 sztuki:\n");
    scanf("%f", &cena);

    printf("Wartosc zamowienia wyniesie: %.2f\n", zamowienie(&cena, ilosc));
    printf("cena za 1 sztuke wyniosla: %.2f\n", cena);
    return 0;
}

float zamowienie(float* cena, int ilosc){
    if (ilosc < 10)
        *cena += 0.2*(*cena);

    return *cena*ilosc;
}
