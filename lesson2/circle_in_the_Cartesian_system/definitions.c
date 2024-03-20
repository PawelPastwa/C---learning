#include <math.h>

float ok(float x1, float y1, float x2, float y2)
{
    float promien, ok;

    promien = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    return 2*M_PI*promien;
}
