#include <stdio.h>

int uk_rownan_liniowych(float* a1, float* b1, float c1, float a2, float b2, float c2);

int main() {

    float a1, b1, c1, a2, b2, c2;

    printf("Podaj wspolczynnik przy x pierwszego rownania:\n");
    scanf("%f", &a1);
    printf("Podaj wspolczynnik przy y pierwszego rownania:\n");
    scanf("%f", &b1);
    printf("Podaj wynik pierwszego rownania:\n");
    scanf("%f", &c1);
    printf("Podaj wspolczynnik przy x drugiego rownania:\n");
    scanf("%f", &a2);
    printf("Podaj wspolczynnik przy y drugiego rownania:\n");
    scanf("%f", &b2);
    printf("Podaj wynik drugiego rownania:\n");
    scanf("%f", &c2);


    if (uk_rownan_liniowych(&a1, &b1, c1, a2, b2, c2) == 1)
        printf("Uklad ma rozwiazanie\nx = %f\ny = %f", a1, b1);
    else if (!uk_rownan_liniowych(&a1, &b1, c1, a2, b2, c2))
        printf("Uklad jest nieoznaczony\n");
    else
        printf("Uklad jest sprzeczny");
    return 0;
}

int uk_rownan_liniowych(float* a1, float* b1, float c1, float a2, float b2, float c2){
    float W = (*a1)*(b2) - (a2)*(*b1), Wx = c1*(b2) - c2*(*b1), Wy = (*a1)*c2 - (a2)*c1;

    if (!W && !Wx && !Wy)
        return 0;
    else if (W){
        *a1 = Wx/W;
        *b1 = Wy/W;
        return 1;
    } else
        return -1;
}
