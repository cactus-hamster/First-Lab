int Fact(int x)
{
    int i;
    int f = 1;
    for (i = 1; i <= x; i = i + 1)
        f = f * i;
    return f;
}

double exp(int x)
{
    int i;
    double e = 1;
    for (i = 1; i <= (x + 3); i = i + 1)
        e = e + (1. / Fact(i));
    return e;
}

int check()
{
    int f = 0;

    f = f || ((exp(0) - 2) >= 1);
    f = f || ((exp(1) - 2.7) >= 0.1);
    f = f || ((exp(2) - 2.71) >= 0.01);
    f = f || ((exp(7) - 2.7182818) >= 0.0000001);

    return f;
}

int main()
{
    return check();
}