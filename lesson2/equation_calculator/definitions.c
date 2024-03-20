float a(float x)
{
    return 10*cos(x) - 0.1*pow(x, 2) + sin(x) + sqrt(4*pow(x, 2) + 7);
}

float b(float x)
{
    return log10(x+5) + exp(x+1) - fabs(tan(x) + 1);
}

float c(float alfa)
{
    return (pow(sin(alfa), 2) + 0.5)/(cos(pow(alfa, 4)) + pow(tan(pow(alfa, 2)), 4));
}

float d(float beta)
{
    return sqrt((fabs(5*sin(pow(beta, 5)) + 1))/(3.5*pow(sin(beta) + cos(beta), 2)));
}
