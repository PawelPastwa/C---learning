#include <stdio.h>
#include "prototypy.h"

int main() {

    int n;
    printf("Podaj ilosc liczb: ");
    scanf("%d", &n);

    czy_ciag_rosnacy(n);

    return 0;
}
