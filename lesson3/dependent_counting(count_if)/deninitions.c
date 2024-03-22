int licz_jezeli(int a, int b, int c){

    if (a % 2 == 0 && b % 2 == 0 && c % 2 == 0)
        return a+b+c;
    else if (a == 1 || b == 1 || c == 1)
        return a*b*c;
    else return -1;
}
