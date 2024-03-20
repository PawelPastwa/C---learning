#include <math.h>
float funkcje_tryg(float alfa, int funkcja)
{
    if (funkcja == 0) return sin((alfa/30)*(M_PI/6));
    else if (funkcja == 1) return cos((alfa/30)*(M_PI/6));
    else if (funkcja == 2) return tan((alfa/30)*(M_PI/6));
    else printf("Bledna wartosc\n");
}
