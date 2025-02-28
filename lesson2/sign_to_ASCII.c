#include <stdio.h>
#include <stdlib.h>

void ascii(char a);

int main()
{
    char a;
    printf("Podaj mala litere:\n");
    scanf("%c", &a);
    ascii(a);
    return 0;
}

void ascii(char a)
{
    printf("Kod ASCII znaku %c to: %d\nZnak nastepny w tym kodzie to %c\nDuza litera znaku pierwszego to: %c", a, a, (a+1), (a-32));
}
