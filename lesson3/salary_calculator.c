#include <stdio.h>

float wyplata(int pensja, int staz);

int main()
{
    int pensja, staz;

    printf("Podaj pensje pracownika:\n");
    scanf("%d", &pensja);
    printf("Podaj staz pracownika:\n");
    scanf("%d", &staz);

    printf("Pensja pracownika wynosi: %f", wyplata(pensja, staz));


    return 0;
}

float wyplata(int pensja, int staz)
{
    if (staz >= 5 && staz <= 10) return pensja + pensja*staz/100.0;
    else if (staz > 10) return pensja + pensja*0.15;
    else return pensja;
}
