#include <stdio.h>

void iloczyn(int n, int* a);

int main() {

    int n, a;
    int* iloczyna;

    iloczyna = &a;

    printf("Podaj ilosc liczb: ");
    scanf("%d", &n);
    iloczyn(n, iloczyna);
    printf("\nIloczyn liczb spelniajacych warunek ( 100 <= n <= 1  : %d", *iloczyna);

    return 0;
}

void iloczyn(int n, int* a)
{
    float liczba;
    int x = 0;
    int i = 0;

    while (i < n)
    {
        printf("Podaj liczbe: ");
        scanf("%f", &liczba);
        if (liczba <= 100 && liczba >= 1)
        {
            if (i == 0) *a = liczba;
            else *a *= liczba;
            x++;
        }
        i++;
    }
        if (x == 0) printf("\nNie ma liczb spelniajacych warunek");
    else printf("\nSa liczby spelniajace warunek");
}
