#include <stdio.h>

void hotel_bez_pokoju(int n);

int main() {

    int n;

    printf("Podaj ilosc pokoi ( > 13 ):\n");
    scanf("%d", &n);

    while (n <= 13){
        printf("Podaj poprawna liczbe > 13:\n");
        scanf("%d", &n);
    }

    hotel_bez_pokoju(n);

    return 0;
}

void hotel_bez_pokoju(int n)
{
    int i = 1;

    while (i <= n + 1)
    {
        if (i == 13)
        {
            i++;
            continue;
        }
        else
        {
            if (i <= n/2)
            {
                if (i % 2 == 0)
                    printf("Nr pokoju: %d\tdwu osobowy\tparter\n", i);
                else
                    printf("Nr pokoju: %d\tjedno osobowy\tparter\n", i);
            }
            else if (i > n/2)
            {
                if (i % 2 == 0)
                    printf("Nr pokoju: %d\tdwu osobowy\tI pietro\n", i);
                else
                    printf("Nr pokoju: %d\tjedno osobowy\tI pietro\n", i);
            }
        }
        i++;
    }
}
