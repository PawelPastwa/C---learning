#include <stdio.h>
#include <stdlib.h>
#include "prototypy.h"
#include "definicje.c"

int main()
{
    char a;
    printf("Podaj znak:\n");
    scanf("%c", &a);
    ascii(a);
    return 0;
}
