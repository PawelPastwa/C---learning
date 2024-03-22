#include <stdio.h>
#include "prototypy.h"

int main() {

    int a, b, c;

    printf("Podaj pierwsza ocene: ");
    scanf("%d", &a);
    printf("Podaj druga ocene: ");
    scanf("%d", &b);
    printf("Podaj trzecia ocene: ");
    scanf("%d", &c);

    printf("Nalezne stypendium wynosi: %d", stypendium(a, b, c));

    return 0;
}
