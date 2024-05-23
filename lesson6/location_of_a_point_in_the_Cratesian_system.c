#include <stdio.h>
#include <math.h>

float polozenie(float x, float y, int* cwiartka);

int main() {

    float x, y;
    int cwiartka;

    printf("Podaj wartosc x:\n");
    scanf("%f", &x);
    printf("Podaj wartosc y:\n");
    scanf("%f", &y);

    printf("Odleglosc punktu od poczatku uk wspolzednych wynosi %f", polozenie(x, y, &cwiartka));


    if (cwiartka)
        printf(" i nalezy do %d cwiartki\n", cwiartka);
    else
        printf(" i lezy na jednej z osi\n");
    return 0;
}

float polozenie(float x, float y, int* cwiartka){
    if(x == 0 || y == 0)
        *cwiartka = 0;
    else if (x < 0 && y < 0)
        *cwiartka = 3;
    else if (x < 0 && y > 0)
      *cwiartka = 2;
    else if (x > 0 && y < 0)
        *cwiartka = 4;
    else
        *cwiartka = 1;

    return fabsf(sqrtf(powf(x,2)+ powf(y, 2)));
}
