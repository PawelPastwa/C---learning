#include <stdio.h>

void czy_ciag_rosnacy(int n);

int main() {
    int n;
    printf("Podaj ilosc liczb: ");
    scanf("%d", &n);

    while (n <= 1) {
        printf("Ilosc liczb musi byc wieksza od 1.\n");
        scanf("%d", &n);
    }

    czy_ciag_rosnacy(n);

    return 0;
}

void czy_ciag_rosnacy(int n) {
    int nr = 1;
    int i = 2;
    int aktualny;
    int poprzedni;

    printf("Podaj 1 wyraz ciagu: ");
    scanf("%d", &poprzedni);

    while (nr == 1 && i <= n) {
        printf("Podaj %d wyraz ciagu: ", i);
        scanf("%d", &aktualny);

        if (aktualny <= poprzedni) {
            nr = 0;
        }

        poprzedni = aktualny;
        i++;
    }

    if (nr == 1)
        printf("Podane liczby tworza ciag rosnacy.\n");
    else
        printf("Podane liczby nie tworza ciagu rosnacego.\n");
}
