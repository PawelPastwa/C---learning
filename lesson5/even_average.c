#include <stdio.h>

//prototyp funkcji
float sredniap(int ile);

int main() {

    int g;
    printf("podaj ilosc liczb calkowitych\n");
    scanf("%d", &g);
    printf("Srednia arytmetyczna liczb parzystych wynosi %f", sredniaap(g));

    return 0;
}

//definicja funkcji

float sredniap(int ile)
{
    int i, sumap = 0, liczba, licznikp = 0;
    for (i = 1; i <= ile; i++)
    {
        printf("Podaj liczbe\n");
        scanf("%d", &liczba);
        if (liczba % 2 == 0)
        {
            sumap += liczba;
            licznikp++;
        }
    }
    return sumap/(float) licznikp;
}
