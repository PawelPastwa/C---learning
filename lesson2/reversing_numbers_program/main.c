#include <stdio.h>
#include <stdlib.h>
#include "prototypy.h"
#include "definicje.c"


int main()
{
    int a;
    int b;

    printf("Podaj liczbe trzycyfrowa\n");
    scanf("%d", &a);
    printf("Podaj druga liczbe trzycyfrowa\n");
    scanf("%d", &b);
    zamiana(a, b);


    return 0;
}
