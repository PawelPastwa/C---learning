int stypendium(int a, int b, int c){

    if ((a+b+c)/3.0 > 4) return 500;
    else if ((a+b+c)/3.0 > 3 && (a+b+c)/3.0 <= 4) return 300;
    else return 0;
}
