#include<stdio.h>

int main()

{
    int  A, B, C, D, i, temp, temp1, temp2;

    scanf("%d %d %d %d", &A, &B, &C, &D);

    for (i=1; i<=4; i++)
    {
        if (A<B)
        {
            temp = A;
            A = B;
            B =temp;
        }

        if (B<C)
        {
            temp1 = B;
            B = C;
            C = temp1;
        }

        if (C<D)
        {
            temp2 = C;
            C = D;
            D = temp2;
        }
    }

    if (A>=(B+C) &&  B>=(C+D))
    {
        printf("N\n");
    }

    else
    {
        printf("S\n");
    }

    return 0;

}
