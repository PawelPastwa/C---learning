#include <stdio.h>

#define N 5

int wczytaj(int tab[], int n);
void wyswietl(int tab[], int n);
void max(int tab[], int n);
int ileRazy(int tab[], int n, int liczba);
int suma (int tab[], int n);

int main(void) {

    int n = 5;
    int tab1[N];
    int tab2[n];

    wczytaj(tab1, N);
    wczytaj(tab2, n);
    wyswietl(tab1, N);
    wyswietl(tab2, n);
    max(tab1, N);
    max(tab2, n);
    printf("%d\n", ileRazy(tab1, N, 2));
    printf("%d\n", ileRazy(tab2, n, 2));
    printf("%d\n", suma(tab1, N));
    printf("%d\n", suma(tab2, n));


    return 0;
}

int wczytaj(int tab[], int n){
    for (int i = 0; i < n; ++i) {
        printf("Podaj wartosc %d elementu:\n", i+1);
        scanf("%d", &tab[i]);
    }
}

void wyswietl(int tab[], int n){
    for (int i = 0; i < n; ++i) {
        printf("%d element tablicy: %d\n", i+1, tab[i]);
    }
}

void max(int tab[], int n){
    int max = tab[0];
    for (int i = 1; i < n; ++i) {
        if (max < tab[i]){
            max = tab[i];
        }
    }
    printf("Element maksymalny tablicy: %d\n", max);
}

int ileRazy(int tab[], int n, int liczba){

    int ile = 0;
    for (int i = 0; i < n; ++i) {
        if (tab[i] == liczba){
            ile++;
        }
    }
    printf("Liczb %d w tablicy znajduje sie: ", liczba);
    return ile;
}

int suma (int tab[], int n){
    int suma = 0;
    for (int i = 0; i < n; ++i) {
        suma += tab[i];
    }
    printf("Suma elementow tablicy wynosi: ");
    return suma;
}
