#include <stdio.h>

void sredniaPiNP(int liczba);

int main()
{
    int liczba;
    sredniaPiNP(liczba);
    return 0;
}
void sredniaPiNP(int liczba)
{
    int licznikp = 0, liczniknp = 0;
    float sumap = 0, sumanp = 0, sredniap = 0, srednianp = 0;

    do
    {
        printf("Podaj liczbe:\n");
        scanf("%d", &liczba);
        if (liczba % 2 == 0 && liczba != 0)
        {
            sumap += liczba;
            licznikp++;
        }
        else if(liczba % 2 != 0)
        {
            sumanp += liczba;
            liczniknp++;
        }
    }
    while (liczba != 0);
    sredniap = sumap/licznikp;
    srednianp = sumanp/liczniknp;
    printf("Srednia liczb parzystych wynosi: %f\nSrednia liczb nieparzystych wynosi: %f", sredniap, srednianp);
}
