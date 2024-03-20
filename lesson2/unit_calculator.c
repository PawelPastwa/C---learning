#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km = 0, mila = 0, KM = 0, w = 0, kmh = 0, ms = 0, f = 0, c = 0, mila2 = 0, km2 = 0;
    printf("Podaj odleglosc w km: \n");
    scanf("%f", &km);
    printf("Podaj odleglosc w milach: \n");
    scanf("%f", &mila2);
    printf("Podaj ilosc koni mechanicznych: \n");
    scanf("%f", &KM);
    printf("Podaj predkosc w km/h: \n");
    scanf("%f", &kmh);
    printf("Podaj temperature w stopniach celcjusza: \n");
    scanf("%f", &c);

    mila = km * 0.625;
    km2 = mila2*1.6;
    w = KM * 735;
    ms = kmh * (1000.0 / 3600.0);
    f = (c * 9.0 / 5.0) + 32.0;

    printf("%f km to %f mil\n%f mil to %f km\n%f koni mechanicznych to %f wat\n%f km/h to %f m/s\n%f stopni celcjusza to %f stopni farenheita", km, mila, mila2, km2, KM, w, kmh, ms, c, f);

    return 0;
}
