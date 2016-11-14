#include<stdio.h>

main()

{
    double A, B, i, j=1;
    int X;


    for (i=1; i<=j; i++)
    {


    while (scanf("%lf", &A))
    {
        if (A<0 || A>10)
        {
            printf("nota invalida\n");
            j = j + 2;
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
        printf("novo calculo (1-sim 2-nao)\n");

            while(scanf("%d", &X))
            {


            if (X<1 || X>2)
            {
                printf("novo calculo (1-sim 2-nao)\n");
            }

            else if (X==1)
            {
                break;
            }

            else if (X==2)
            {
                return;
            }


            }
    }

}

