#include <stdio.h>
#include <stdlib.h>

int min(int* tab, int n);
float srednia(int* tab, int n);
void losuj(int* tab, int n);
int ileRazy(int* tab, int n, int x);

int main(void) {

    int n = 5;

    int tab3[5] = {1, 2, 3, 4, 5};
    int tab4[] = {1, 2, 3, 4, 5};
    int tab5[n];

    losuj(tab5, n);

    printf("%f\n", srednia(tab3, n));
    printf("%f\n", srednia(tab4, n));
    printf("%f\n", srednia(tab5, n));

    printf("%d\n", min(tab3, n));
    printf("%d\n", min(tab4, n));
    printf("%d\n", min(tab5, n));

    printf("%d\n", ileRazy(tab3, n, 2));
    printf("%d\n", ileRazy(tab4, n, 2));
    printf("%d\n", ileRazy(tab5, n, 2));


    return 0;
}

int min(int* tab, int n){
    int min = *tab;
    for (int i = 1; i < n; ++i) {
        if (min > *(tab+i)){
            min = *(tab+i);
        }
    }
    printf("Element minimalny tablicy to: ");
    return min;
}
float srednia(int* tab, int n){
    int suma = *tab;
    for (int i = 1; i < n; ++i) {
        suma += *(tab+i);
    }
    printf("Srednia liczb w tablicy wynosi: ");
    return (float)suma / (float)n;
}
void losuj(int* tab, int n){
    for (int i = 0; i < n; ++i) {
        *(tab+i) = rand() % 10;
        printf("%d\n", *(tab+i));
    }
}
int ileRazy(int* tab, int n, int x){
    int ile = 0;
    for (int i = 0; i < n; ++i) {
        if (*(tab+i) == x){
            ile++;
        }
    }
    printf("Liczb %d w tablicy znajduje sie: ", x);
    return ile;
}
