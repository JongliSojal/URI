#include<stdio.h>

int main()

{
    int i, p, n, q;
    double pay;

    scanf("%d", &p);

    for (i=1, pay=0; i<=p; i++)
    {
        scanf("%d%d", &n, &q);

        if (n==1001)
        {
            pay += q*1.50;
        }

        else if (n==1002)
        {
            pay += q*2.50;
        }

        else if (n==1003)
        {
            pay += q*3.50;
        }

        else if (n==1004)
        {
            pay += q*4.50;
        }

        else if (n==1005)
        {
            pay += q*5.50;
        }

    }

    printf("%.2lf\n", pay);

    return 0;
}
