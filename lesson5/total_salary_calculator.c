#include <stdio.h>

//prototyp funkcji
void placa(int pracownicy);

int main() {

    int liczbap;

    printf("Podaj liczbe pracownikow\n");
    scanf("%d", &liczbap);
    placa(liczbap);

    return 0;
}

//definicja funkcji
void placa(int pracownicy)
{
    int i, placa, sumaplac = 0, placa2 = 0;

    printf("Podaj place pracownikow\n");
    for (i = 1; i <= pracownicy; i++)
    {
        scanf("%d", &placa);
        if (placa <= 5000)  placa2 = placa + (0.1)*placa;
        else placa2 = placa + (0.05)*placa;
        printf("Nowa placa %d pracownika wynosi: %d\n", i, placa2);
        sumaplac += placa2;
    }
    printf("Suma plac wynosi: %d", sumaplac);
}
