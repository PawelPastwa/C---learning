#include <stdio.h>
#include <string.h>

int main()
{
    //deklaracje

    char przedmiot[15];
    float ocena;
    int egzaminy;
    float najwyzsza_ocena = -1;
    char przedmiot_topocena[15];

    //instrukcje
    printf("Podaj liczbe egzaminow:\n");
    scanf("%d", &egzaminy);
    while (egzaminy <= 0)
    {
        printf("Podaj prawidlowa liczbe egzaminow:\n");
        scanf("%d", &egzaminy);
    }

    while (egzaminy > 0)
    {
        printf("Podaj przedmiot:\n");
        scanf("%s", przedmiot);
        printf("Podaj ocene z %s (2-5):\n", przedmiot);
        scanf("%f", &ocena);
        while (ocena < 2 || ocena > 5)
        {
            printf("Podaj poprawna ocene z %s (2-5):\n", przedmiot);
            scanf("%f", &ocena);
        }

        if (ocena > najwyzsza_ocena)
            {
                najwyzsza_ocena = ocena;
                strcpy(przedmiot_topocena, przedmiot);
            }
     egzaminy--;
    }
    printf("przedmiot/ 1 z przedmiotow z najwyzsza ocena:\n%s\nocena:\n%f", przedmiot_topocena, najwyzsza_ocena);
    return 0;
}
