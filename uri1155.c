#include<stdio.h>

int main()

{
    double S = 0;
    int i;

    for (i=1; i<=100; i++)
    {
        S = S + (1/(double)i);
    }

    printf("%.02lf\n", S);

    return 0;

}
