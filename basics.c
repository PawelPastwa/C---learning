#include <stdio.h>
#include <stdlib.h>

int main()
{
    //deklaracje
    float a;
    float b;
    float sa;
    //instrukcje

    printf("Podaj 2 liczby a i b\n");
    scanf("%f %f", &a, &b);
    sa = (a+b)/2;
    printf("Srednia = %f", sa);



    return 0;
}
