#include <stdio.h>

int licznik(int n, int* a);

int main() {

    int a = 0;
    int n;

    printf("Podaj ilosc liczb: ");
    scanf("%d", &n);
    printf("Liczb > 0 jest %d\n", licznik(n, &a));
    printf("liczb == 0 jest %d", a);

    return 0;
}

int licznik(int n, int* a){

    int i = 0;
    int liczba;
    int licznik = 0;

    while (i < n){
        printf("Podaj %d liczbe: ", i+1);
        scanf("%d", &liczba);
        if (liczba == 0)
            (*a)++;
        else if (liczba > 0)
            licznik++;
        i++;
    }
    return licznik;
}
