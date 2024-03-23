#include <stdio.h>

void ASCII();

int main() {

    ASCII();

    return 0;
}

void ASCII()
{
    int i = 65;

    while(i <= 90)
    {
        printf("%c -> %d\t%c -> %d\n", i, i, i+32, i+32);
        i++;
    }
}
