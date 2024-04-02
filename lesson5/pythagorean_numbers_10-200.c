#include <stdio.h>
#include <math.h>

int main() {

    int n = 0;

    while (n < 10 || n > 200)
    {
        printf("Podaj ilosc 3 pitagorejskich do znalezienia (10 - 200):");
        scanf("%d", &n);
        if (n < 10 | n > 200)
            printf("Liczba nie miesci sie w przedziale (10 - 200), sproboj jeszcze raz\n");
    }

    int l_3 = 0;
    int i = 3;

    while (l_3 < n && i < n) {
        for (i = 3; i < n; ++i)
            for (int j = 1; j < n; ++j)
                for (int k = 2; k < n; ++k) {
                    if (l_3 == n)
                        break;
                    if (pow(k, 2) + pow(j, 2) == pow(i, 2)) {
                        printf("%d^2\t =\t %d^2\t +\t %d^2\n", i, j, k);
                        l_3++;
                    }
                }
    }

    printf("Z liczb mniejszych od ilosc poszukiwanych, udalo sie znalesc %d liczb/y spelniajacych rownanie a^2 + b^2 = c^2:\n", l_3);

    return 0;
}
