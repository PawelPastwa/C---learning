#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float sredniaa, sredniag;
    printf("Podaj 2 liczby\n");
    scanf("%d %d", &a, &b);
    sredniaa = (a+b)/2.0;
    sredniag = (a*b)/2.0;
    printf("Srednia arytmetyczna wynosi: %f\nSrednia geometryczna wynosi: %f", sredniaa, sredniag);
    return 0;
}
