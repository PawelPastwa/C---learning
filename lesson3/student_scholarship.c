#include <stdio.h>

int stypendium(int a, int b, int c);

int main() {

    int a, b, c;

    printf("Podaj pierwsza ocene: ");
    scanf("%d", &a);
    printf("Podaj druga ocene: ");
    scanf("%d", &b);
    printf("Podaj trzecia ocene: ");
    scanf("%d", &c);

    printf("Nalezne stypendium wynosi: %d", stypendium(a, b, c));

    return 0;
}

int stypendium(int a, int b, int c){

    if ((a+b+c)/3.0 > 4) return 500;
    else if ((a+b+c)/3.0 > 3 && (a+b+c)/3.0 <= 4) return 300;
    else return 0;
}
