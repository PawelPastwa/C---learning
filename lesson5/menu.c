#include <stdio.h>
#include <math.h>

void automorficzne(int a);
void pierwsze(int a);
void pitagorejskie(int a, int b);
void menu();

int main() {

    menu();

    return 0;
}

void automorficzne(int a){

    int ile;
    int potega;
    int potega2;

    for (int i = 0; i < a; i++){

        ile = floor(log10(i)) + 1;
        potega = pow(i, 2);
        potega2 = pow(10, ile);

        if (i == 0)
            printf("Potega: %d\t Liczba: %d\n", potega, i);

        else if (potega % potega2 == i)
            printf("Potega: %d\t Liczba: %d\n", potega, i);
    }
}

void pierwsze(int a){

    int pierwsze[a/2];
    pierwsze[0] = 2;
    int b = 0;

    printf("%d\n", 2);

    for (int i = 3; i <= a; i++){
        int licznik = 0;
        for (int j = 0; j <= b; j++)
            if (i % pierwsze[j] == 0)
                licznik++;
        if (!licznik) {
            b++;
            pierwsze[b] = i;
            printf("%d\n", i);
        }
    }
}

void pitagorejskie(int n, int m){

    while (n < m) {
        for (n; n < m; ++n)
            for (int j = 1; j < m; ++j)
                for (int k = 2; k < m; ++k) {
                    if (pow(k, 2) + pow(j, 2) == pow(n, 2)) {
                        printf("%d^2\t =\t %d^2\t +\t %d^2\n", n, j, k);
                    }
                }
    }
}

void menu(){

    int n;

    printf("Podaj funckce:\n1 - liczby automorficzne\n2 - liczby pierwsze\n3 - liczby pitagorejskie\nWprowadz dowolny inny znak by zakonczyc program\n");
    scanf("%d", &n);

    switch (n) {
        case 1: {
            int granica;
            printf("Podaj granice poszukiwan: ");
            scanf("%d", &granica);
            automorficzne(granica);

            break;
        }
        case 2: {
            int granica2;

            printf("Podaj granice poszukiwan: ");
            scanf("%d", &granica2);

            pierwsze(granica2);
            break;
        }
        case 3:{
            int n, m;

            printf("Podaj lewa granice poszukiwan 3 pitagorejskich: ");
            scanf("%d", &n);
            printf("Podaj prawa granice poszukiwan 3 pitagorejskich: ");
            scanf("%d", &m);

            pitagorejskie(n, m);
            break;
        }
    }
}
