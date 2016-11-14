#include<stdio.h>

int main()
{
    int X, i=1;

    scanf("%d", &X);

    if (X%2==0)
    {
        X = X + 1;
        for (i=1; i<=6; i++)
        {
            printf("%d\n", X);
            X = X + 2;
        }
    }

    else if (X%2==1)
    {
        for (i=1; i<=6; i++)
        {
            printf("%d\n", X);
            X = X + 2;
        }
    }

    return 0;
}
