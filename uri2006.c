#include<stdio.h>

int main()

{
    int N;
    int A, B, C, D, E;
    int count = 0;

    scanf("%d", &N);


    if (N==1)
    {
        scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

        if (A==1)
        {
            count = count + 1;
        }

        if (B==1)
        {
            count = count + 1;
        }

        if (C==1)
        {
            count = count + 1;
        }

        if (D==1)
        {
            count = count + 1;
        }

        if (E==1)
        {
            count = count + 1;
        }
    }

    else if (N==2)
    {
        scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

        if (A==2)
        {
            count = count + 1;
        }

        if (B==2)
        {
            count = count + 1;
        }

        if (C==2)
        {
            count = count + 1;
        }

        if (D==2)
        {
            count = count + 1;
        }

        if (E==2)
        {
            count = count + 1;
        }
    }

    else if (N==3)
    {
        scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

        if (A==3)
        {
            count = count + 1;
        }

        if (B==3)
        {
            count = count + 1;
        }

        if (C==3)
        {
            count = count + 1;
        }

        if (D==3)
        {
            count = count + 1;
        }

        if (E==3)
        {
            count = count + 1;
        }
    }

    else if (N==4)
    {
        scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

        if (A==4)
        {
            count = count + 1;
        }

        if (B==4)
        {
            count = count + 1;
        }

        if (C==4)
        {
            count = count + 1;
        }

        if (D==4)
        {
            count = count + 1;
        }

        if (E==4)
        {
            count = count + 1;
        }
    }

   printf("%d\n", count);

   return 0;

}
