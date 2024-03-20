void zamiana(int a, int b)
{
    int c, d;
    int jednosci_a, jednosci_b, dziesiatki_a, dziesiatki_b, setki_a, setki_b, reszta_a, reszta_b;


    c = a;
    a = b;
    b = c;
    printf("Liczba a wynosi: %d\nLiczba b wynosi: %d\n", a, b);

    reszta_a = a % 100;
    reszta_b = b % 100;
    jednosci_a = a % 10;
    jednosci_b = b % 10;
    setki_a = (a - reszta_a)/100;
    setki_b = (b - reszta_b)/100;

    a = a - setki_a*100 - jednosci_a;
    b = b - setki_b*100 - jednosci_b;

    d = setki_a;
    setki_a = jednosci_a;
    jednosci_a = d;

    d = setki_b;
    setki_b = jednosci_b;
    jednosci_b = d;

    a = a + setki_a*100 + jednosci_a;
    b = b + setki_b*100 + jednosci_b;

    printf("Po zamianie a wynosi: %d\nA b wynosi: %d\n", a, b);
}
