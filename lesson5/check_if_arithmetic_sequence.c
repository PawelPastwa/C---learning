#include <stdio.h>

//prototypy
void ciaga(int n);

int main() {

    int n;
    printf("Podaj ilosc liczb\n");
    scanf("%d", &n);
    ciaga(n);

    return 0;
}

void ciaga(int n)
{
    int r = 0, liczba, i, poprzednia = 0, srednia = 0, suma = 0, licznik = 0, c = 0;
    for (i = 1; i <= n; i++)
    {
        printf("\nPodaj liczbe\n");
        scanf("%d", &liczba);
        if (i == 1) poprzednia = 0, r = 0;
        else
        {
            r = liczba - poprzednia;
            suma += r;
            licznik++;
        }
        poprzednia = liczba;
    }
    srednia = suma/(float)licznik;
    if (srednia != r) c = 1;
    if (c == 1) printf("\nTo nie jest ciag arytmetyczny\n");
    else printf("\nTo jest ciag arytmetyczny a jego roznica wynosi %d\n", r);
}
