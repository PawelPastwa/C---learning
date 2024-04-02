#include <stdio.h>
#include <math.h>

//prototypy
void find_numbers();

int main() {

    find_numbers();

    return 0;
}

//definicje
void find_numbers()
{
    for (int i = 100; i < 1000; i++)
    {
        int j = i % 10;
        int d = (i % 100 - j)/10;
        int s = i/100;

        if (i == (pow(j,3)+ pow(d,3)+ pow(s,3)))
            printf("%d\n", i);
    }
}
