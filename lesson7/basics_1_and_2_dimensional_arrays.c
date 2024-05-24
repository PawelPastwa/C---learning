#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 3

//prototypy funkcji
void wczytaj(int n, int tab[]);
void wyswietl(int n, int tab[]);
void wczytaj2(int n, int *tab);
void wyswietl2(int n, int *tab);
int losuj(int n);
void wczytaj3(int n, int tab[]);
void wyswietl3(int n, int tab[]);
void wczytaj2D(int n, int m, int tab[n][m]);
void wyswietl2D(int n, int m, int tab[n][m]);



int main()
{

    //tablice o stalej dlugosci
    int tab1[5];
    int tab2[ROZMIAR];
    int tab3[] = {1,2,3,4,5,6,7,8};
    int rozmiar = sizeof(tab3) / sizeof(int);
    printf("rozmiar %d\n", rozmiar);

    //tablice o zmiennej dlugosci
    printf("podaj rozmiar tablicy: ");
    scanf("%d", &rozmiar);

    int tab4[rozmiar];
    int tab5[rozmiar];

    printf("tablica5\n");
    wczytaj(rozmiar, tab5);
    wyswietl(rozmiar, tab5);
    printf("\ntablica1\n");
    wczytaj(5, tab1);
    wyswietl(5, tab1);

    int tab6[rozmiar];

    printf("\nTablica 6:\n");
    wczytaj2(rozmiar, tab6);
    wyswietl2(rozmiar, tab6);

    int rozmiar2;
    printf("\nPodaj rozmiar byq: ");
    scanf("%d", &rozmiar2);
    int tab7[rozmiar2];

    printf("\nTablica 7\n");
    wczytaj3(rozmiar2, tab7);
    wyswietl3(rozmiar2, tab7);

    int rzedy, kolumny;
    printf("\nPodaj ilosc rzedow: \n");
    scanf("%d", &rzedy);
    printf("\nPodaj ilosc kolumn: \n");
    scanf("%d", &kolumny);
    int tab8[rzedy][kolumny];
    wczytaj2D(rzedy, kolumny, tab8);
    wyswietl2D(rzedy, kolumny, tab8);



    return 0;
}

//definicje funkcji
void wczytaj(int n, int tab[])
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("podaj %d wartosc elementu: ", i);
        scanf("%d", &tab[i]);
    }
}
void wyswietl(int n, int tab[])
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%10d", tab[i]);
    }
}
void wczytaj2(int n, int *tab)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("podaj %d wartosc elementu: ", i);
        scanf("%d", (tab + i));
    }
}
void wyswietl2(int n, int *tab)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%10d", *(tab + i));
    }
}
int losuj(int n)
{
    srand(time(0));
    n = rand() % 10;
    return n;
}
void wczytaj3(int n, int tab[])
{
    int i;
    srand(time(0));
    for (i = 0; i < n; i++)
    {
        tab[i] = rand() % 10;
    }
}
void wyswietl3(int n, int tab[])
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d", tab[i]);
    }
}

void wczytaj2D(int n, int m, int tab[n][m])
{
    int i;
    int j;
    srand(time(0));
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            tab[i][j] = rand() % 10;
        }
    }
}
void wyswietl2D(int n, int m, int tab[n][m])
{
    int i;
    int j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
}
