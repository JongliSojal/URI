#include<stdio.h>

int main()

{
    double i, n;
    double S = 0;

    for (i=1, n=1; i<=39; i=i+2, n=n*2)
    {
        S = S + (i/n);
    }

    printf("%.02lf\n", S);

    return 0;

}
