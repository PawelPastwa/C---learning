#include <stdio.h>

//prototyp funkcji
void szlaczek(int ile, char znak);

void szlaczekv2(int ilew, int ilek, char znakk);

int main() {

    int q, r;
    char s;
    printf("Podaj ile znakow, ile wierszy jaki znak\n");
    scanf("%d %d %c", &q, &r, &s);
    szlaczekv2(q, r, s);
    szlaczek(q, s);

    return 0;
}

//definicja funkcji
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

    for (h = 1; h <= ilek; h++)
    {
        for (i = 1; i <= ilew; i++)
        {
            printf("%c", znakk);
        }
        printf("\n");
    }
}
