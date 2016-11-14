#include<stdio.h>

int main()

{
    double A, B;

    while (scanf("%lf", &A))
    {
        if (A<0 || A>10)
        {
            printf("nota invalida\n");
        }

        else if (A>=0 && A<=10)
        {
            break;
        }
    }

    while (scanf("%lf", &B))
    {
        if (B<0 || B>10)
        {
            printf("nota invalida\n");
        }

        else if (B>=0 && B<=10)
        {
            break;
        }
    }

    printf("media = %.02lf\n", (A+B)/2);

    return 0;

}
