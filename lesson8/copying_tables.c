#include <iostream>

void tablicowa(int tab[], int tab1[], int n);

void wskaznikowa(int* tab, int* tab1, int n);

int main() {
    int tab1[] = {1, 2, 3, 4, 5};
    int tab2[5];
    int tab3[5];

    tablicowa(tab1, tab2, 5);
    wskaznikowa(tab1, tab3, 5);
 return 0;
}

void tablicowa(int tab[], int tab1[], int n){
    for (int i = 0; i < n; ++i) {
        tab1[i] = tab[i];
        printf("%d\n", tab1[i]);
    }
}

void wskaznikowa(int* tab, int* tab1, int n){
    for (int i = 0; i < n; ++i) {
        *(tab1+i) = *(tab+i);
        printf("%d\n", *(tab1+i));
    }
}

