#include <stdio.h>
#include <stdlib.h>
#define STATUS "student"
#define SREDNIA "4.5"
int main()
{
    //deklaracje

    char imie[15];
    char nazwisko[15];
    char plec;
    int wiek;


    //instrukcje

    printf("Podaj imie, nazwisko, plec i wiek\n");
    scanf("%s %s %c %d", imie, nazwisko, &plec, &wiek);

    printf("%s %s %c %d\n", imie, nazwisko, plec, wiek);
    printf("%s %s", STATUS, SREDNIA);

    return 0;
}
