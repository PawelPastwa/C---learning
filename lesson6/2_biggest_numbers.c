#include <stdio.h>

int najwieksze(int n, int *a);

int main() {

    int n;
    int a;

    printf("Podaj ilosc liczb:  ");
    scanf("%d", &n);
    printf("Najwieksza liczba sposrod podanyc to %d\n", najwieksze(n, &a));
    printf("Druga najwieksza liczba sposrod podanych to %d", a);

    return 0;
}

int najwieksze(int n, int *a) {
    int najwieksza;
    int i = 0;
    int pomoc;

    while (i < n) {
        printf("Podaj %d liczbe", i + 1);
        scanf("%d", &pomoc);
        if (i == 0)
            najwieksza = pomoc;
        else if (i == 1)
            *a = pomoc;
        if (najwieksza <= pomoc && i != 0) {
            *a = najwieksza;
            najwieksza = pomoc;
        }
        i++;
    }
    return najwieksza;
}
