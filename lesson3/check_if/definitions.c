#include <stdio.h>

void check_if(char znak){
    switch (znak){
        case '$':
            printf("Podany znak jest znakiem dolara");
            break;
        case 'q':
        case 'w':
        case 'e':
        case 'r':
        case 't':
        case 'y':
        case 'u':
        case 'i':
        case 'o':
        case 'p':
        case 'a':
        case 's':
        case 'd':
        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'k':
        case 'l':
        case 'z':
        case 'x':
        case 'c':
        case 'v':
        case 'b':
        case 'n':
        case 'm':
            printf("Podany znak jest mala litera angielskiego alfabetu");
            break;
        case 'Q':
        case 'W':
        case 'E':
        case 'R':
        case 'T':
        case 'Y':
        case 'U':
        case 'I':
        case 'O':
        case 'P':
        case 'A':
        case 'S':
        case 'D':
        case 'F':
        case 'G':
        case 'H':
        case 'J':
        case 'K':
        case 'L':
        case 'Z':
        case 'X':
        case 'C':
        case 'V':
        case 'B':
        case 'N':
        case 'M':
            printf("Podany znak jest duza litera angielskiego alfabetu");
            break;
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '0':
            printf("Podany znak jest cyfra");
            break;
        case '+':
        case '-':
        case '=':
        case '*':
        case '/':
        case '^':
        case '%':
            printf("Podany znak jest znakiem dzialania podstawowych operacji arytmetycznych");
            break;
        default:
            printf("Podano nieodpowiedi znak");
    }
}
