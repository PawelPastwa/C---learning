int kiedy_stan_konta_2x(float* wplata, float oprocentowanie, int opcja)
{
    float wplata_poczatkwa = *wplata;
    int czas = 0;

    while (*wplata < 2*wplata_poczatkwa)
    {
        if (opcja == 1)
        {
            czas++;
            *wplata += *wplata*oprocentowanie;
        }
        else if (opcja == 2)
        {
            czas++;
            if (czas % 4 == 0)
                *wplata += *wplata*oprocentowanie;
        }
        else if (opcja == 3)
        {
            czas++;
            if (czas % 12 == 0)
                *wplata += *wplata*oprocentowanie;
        }

    }
    return czas;
}
