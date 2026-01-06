#include <stdio.h>

void szlaczek(int ile, char znak);

void szlaczekv2(int ilew, int ilek, char znakk);

int main() {

    int q, r;
    char s;

    printf("Podaj ile znakow i jaki znak\n");
    scanf("%d %c", &q, &s);
    while (q <= 0) {
        printf("Podaj poprawna liczbe znakow >0\n");
        scanf("%d", &q);
    }
    szlaczek(q, s);
    printf("Podaj liczbe kolumn\n");
    scanf("%d", &q);
    while (q <= 0){
        printf("Podaj poprawna liczbe kolumn\n");
        scanf("%d", &q);
    }
    printf("Podaj liczbe wierszy\n");
    scanf("%d", &r);
    while (r <= 0){
        printf("Podaj poprawna liczbe wierszy\n");
        scanf("%d", &r);
    }
    getchar();
    printf("Podaj znak\n");
    scanf( "%c", &s);

    szlaczekv2(r, q, s);

    return 0;
}

void szlaczek(int ile, char znak)
{
    int i;
    for (i = 1; i <= ile; i++)
    {
        printf("%c", znak);
    }
    printf("\n");
}

void szlaczekv2(int ilew, int ilek, char znakk)
{
    int i, h;

    for (h = 1; h <= ilew; h++)
    {
        for (i = 1; i <= ilek; i++)
        {
            printf("%c", znakk);
        }
        printf("\n");
    }
}
