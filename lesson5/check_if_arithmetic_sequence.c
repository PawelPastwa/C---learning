#include <stdio.h>
#include <stdbool.h>

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
    int liczba = 0, poprzednia = 0, r_last, r;
    bool x = true;
    printf("\nPodaj liczbe\n");
    scanf("%d", &poprzednia);

    for (int i = 2; i <= n; i++)
    {
        printf("\nPodaj liczbe\n");
        scanf("%d", &liczba);
        r = liczba - poprzednia;

        if (i > 2) {
            if (r != r_last) {
                x = false;
                break;
            }
        }
        r_last = r;
        poprzednia = liczba;
    }
    if(x == true)
        printf("Ciag jest arytmetyczny");
    else
        printf("Ciag nie jest arytmetyczny");
}
