float wyplata(int pensja, int staz)
{
    if (staz >= 5 && staz <= 10) return pensja + pensja*staz/100.0;
    else if (staz > 10) return pensja + pensja*0.15;
    else return pensja;
}
