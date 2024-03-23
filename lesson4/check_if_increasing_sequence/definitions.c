#include <stdio.h>

void czy_ciag_rosnacy(int n){

    int nr = 1;
    int i = 1;
    int wyraz;
    int wyraz1;

    while (nr && i <= n)
    {
        printf("Podaj %d wyraz ciagu: ", i);
        scanf("%d", &wyraz);
      if (i == 1)
      {
          wyraz1 = wyraz;
          i++;
          continue;
      }
        if (wyraz <= wyraz1)
            nr = 0;
        wyraz1 = wyraz;
        i++;
    }
    if (nr == 1)
        printf("Podane liczby tworza ciag rosnacy");
    else
        printf("Podane liczby nie tworza ciagu rosnacego");
}
