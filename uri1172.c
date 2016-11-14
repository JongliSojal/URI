#include<stdio.h>

int main()

{
    int size = 10, i;
    int X[size];

    for (i=0; i<size; i++)
    {
        scanf("%d", &X[i]);
    }

    for (i=0; i<size; i++)
    {
        if (X[i]<=0)
        {
            printf("X[%d] = 1\n", i);
        }

        else
        {
            printf("X[%d] = %d\n", i, X[i]);
        }

    }

    return 0;
}
