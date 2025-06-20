#include <stdio.h>

void czy_wszyscy_zdali(int n);

int main() {
    int n;

    printf("Podaj liczbe studentow: ");
    scanf("%d", &n);
    czy_wszyscy_zdali(n);

    return 0;
}

void czy_wszyscy_zdali(int n)
{
    int nr = 1;
    int i = 0;
    int wynik;

    while (nr && i < n)
    {
        printf("Podaj wynik w procentach studenta %d: ", i + 1);
        scanf("%d", &wynik);

        if (wynik < 51)
            nr = 0;

        i++;
    }

    if (nr == 0)
        printf("Nie wszyscy zdali egzamin\n");
    else
        printf("Wszyscy zdali egzamin\n");
}
