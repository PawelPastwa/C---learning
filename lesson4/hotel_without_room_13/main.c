#include <stdio.h>
#include "prototypy.h"

int main() {

    int n;

    printf("Podaj ilosc pokoi: ");
    scanf("%d", &n);

    hotel_bez_pokoju(n);

    return 0;
}
