#include <stdio.h>
#include "prototypes.h"

int main() {

    char znak;

    printf("Podaj znak: ");
    scanf("%c", &znak);

    check_if(znak);

    return 0;
}
