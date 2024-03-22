#include <stdio.h>
#include <stdlib.h>

void miesiac_dane(int miesiac);

int main()
{
    int miesiac;

    printf("Podaj numer miesiaca:\n");
    scanf("%d", &miesiac);

    miesiac_dane(miesiac);


    return 0;
}

void miesiac_dane(int miesiac)
{
    switch (miesiac)
    {
    case 1:
        printf("Miesiac nalezy do 1 kwartalu i ma 31 dni\n");
            break;
    case 2:
        printf("Miesiac nalezy do 1 kwartalu i ma 29 dni (2024)\n");
            break;
    case 3:
        printf("Miesiac nalezy do 1 kwartalu i ma 31 dni\n");
            break;
    case 4:
        printf("Miesiac nalezy do 2 kwartalu i ma 30 dni\n");
            break;
    case 5:
        printf("Miesiac nalezy do 2 kwartalu i ma 31 dni\n");
            break;
    case 6:
        printf("Miesiac nalezy do 2 kwartalu i ma 30 dni\n");
            break;
    case 7:
        printf("Miesiac nalezy do 3 kwartalu i ma 31 dni\n");
            break;
    case 8:
        printf("Miesiac nalezy do 3 kwartalu i ma 31 dni\n");
            break;
    case 9:
        printf("Miesiac nalezy do 3 kwartalu i ma 30 dni\n");
            break;
    case 10:
        printf("Miesiac nalezy do 4 kwartalu i ma 31 dni\n");
            break;
    case 11:
        printf("Miesiac nalezy do 4 kwartalu i ma 30 dni\n");
            break;
    case 12:
        printf("Miesiac nalezy do 4 kwartalu i ma 31 dni\n");
            break;
    }
}
