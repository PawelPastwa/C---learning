#include <stdio.h>

void znajdz_liczby_pierwsze_20(int n);

int main() {

    int n;

    printf("Podaj ile liczb pierwszych potrzebujesz: ");
    scanf("%d", &n);


    znajdz_liczby_pierwsze_20(n);

    return 0;
}

void znajdz_liczby_pierwsze_20(int n) {

    int k = 3;

    for (int i = 2; i <= k; i++)
    {
        int licznik = 0;

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                licznik++;
        }
        if (licznik == 0)
        {
            printf("%d\n", i);
            n--;
        }
        if (n > 0)
            k++;
    }
}
