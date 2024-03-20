#include <stdio.h>
#include <stdlib.h>
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

    while (egzaminy > 0)
    {
        printf("Podaj przedmiot i ocene:\n");
        scanf("%s %f", przedmiot, &ocena);


        if (ocena > najwyzsza_ocena)
            {
                najwyzsza_ocena = ocena;
                strcpy(przedmiot_topocena, przedmiot);
            }
     egzaminy--;
    }
    printf("przedmiot z najwyzsza ocena:\n%s\nocena:\n%f", przedmiot_topocena, najwyzsza_ocena);
    return 0;
}
