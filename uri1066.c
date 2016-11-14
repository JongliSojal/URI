#include<stdio.h>

int main()
{
    int a, b, c, d, e;
    int even = 0, odd = 0, positive = 0, negative = 0;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a%2==0)
    {
        even = even + 1;

        if (a>0)
        {
            positive = positive + 1;
        }

        else if (a<0)
        {
            negative = negative + 1;
        }
    }

    else if (a%2==1 || a%2== -1)
    {
        odd =  odd + 1;

        if (a>0)
        {
            positive = positive + 1;
        }

        else if (a<0)
        {
            negative = negative + 1;
        }
    }


    if (b%2==0)
    {
        even = even + 1;

        if (b>0)
        {
            positive = positive + 1;
        }

        else if (b<0)
        {
            negative = negative + 1;
        }
    }

    else if (b%2==1 || b%2== -1)
    {
        odd =  odd + 1;

        if (b>0)
        {
            positive = positive + 1;
        }

        else if (b<0)
        {
            negative = negative + 1;
        }
    }

    if (c%2==0)
    {
        even = even + 1;

        if (c>0)
        {
            positive = positive + 1;
        }

        else if (c<0)
        {
            negative = negative + 1;
        }
    }

    else if (c%2==1 || c%2== -1)
    {
        odd =  odd + 1;

        if (c>0)
        {
            positive = positive + 1;
        }

        else if (c<0)
        {
            negative = negative + 1;
        }
    }


    if (d%2==0)
    {
        even = even + 1;

        if (d>0)
        {
            positive = positive + 1;
        }

        else if (d<0)
        {
            negative = negative + 1;
        }
    }

    else if (d%2==1 || d%2== -1)
    {
        odd =  odd + 1;

        if (d>0)
        {
            positive = positive + 1;
        }

        else if (d<0)
        {
            negative = negative + 1;
        }
    }


    if (e%2==0)
    {
        even = even + 1;

        if (e>0)
        {
            positive = positive + 1;
        }

        else if (e<0)
        {
            negative = negative + 1;
        }
    }

    else if (e%2==1 || e%2== -1)
    {
        odd =  odd + 1;

        if (e>0)
        {
            positive = positive + 1;
        }

        else if (e<0)
        {
            negative = negative + 1;
        }
    }

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", positive);
    printf("%d valor(es) negativo(s)\n", negative);

    return 0;



}
