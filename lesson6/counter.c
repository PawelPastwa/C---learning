#include <stdio.h>

int ilenieujemnych(int k, int* rowna);

int main() {

    int k;
    int rowna = 0;
    int nieujemne = 0;
    printf("Podaj ilosc liczb:\n");
    scanf("%d", &k);
    nieujemne = ilenieujemnych(k, &rowna);
    printf("Liczb > 0: %d\nLiczb = 0: %d", nieujemne, rowna);

    return 0;
}

int ilenieujemnych(int k, int* rowna)
{
    int i = 0;
    float liczba;
    int wieksza;
    wieksza = 0;

    while (i < k)
    {
        printf("Podaj liczbe:\n");
        getchar();
        scanf("%f", &liczba);
        if (liczba > 0) wieksza++;
        else if (liczba == 0) (*rowna)++;
        i++;
    }
    return wieksza;
}
