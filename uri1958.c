#include<stdio.h>

int main()

{
    long double N;
    char c[150];

    scanf("%LE", &N);

    sprintf(c, "%LE", N);

    if (c[0] != '-')
    {
        printf("+");
    }

    printf("%.4LE\n", N);

    return 0;
}
