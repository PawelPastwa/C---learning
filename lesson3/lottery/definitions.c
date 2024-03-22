void szczesliwy_bilet(int numer)
{
    int jednosci, dziesiatki, setki, tysiace, d_tysiecy, s_tysiecy;

    jednosci = numer % 10;
    dziesiatki = (numer % 100 - jednosci) / 10;
    setki = (numer % 1000 - jednosci - dziesiatki*10) / 100;
    tysiace = (numer % 10000 - jednosci - dziesiatki*10 - setki*100) / 1000;
    d_tysiecy = (numer % 100000 - jednosci - dziesiatki*10 - setki*100 - tysiace*1000) / 10000;
    s_tysiecy = (numer % 1000000 - jednosci - dziesiatki*10 - setki*100 - tysiace*1000 - d_tysiecy*10000) / 100000;

    if ((jednosci + dziesiatki + setki) == (tysiace + d_tysiecy + s_tysiecy)) printf("Gratulacje uzytkowniku, twoj numer biletu jest szczesliwy\n");
    else
        printf("Better luck next time\n");
}
