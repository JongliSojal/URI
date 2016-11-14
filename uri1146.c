#include<stdio.h>

int main()

{
    int X;

    scanf("%d", &X);

    while(X!=0)
    {
        int i, m = 1;

        for (i=1; i<=X; i++)
        {
            if (i<X)
            {
                printf("%d ", m++);
            }

            if (i==X)
            {
                printf("%d\n", m);
            }

        }

        scanf("%d", &X);

        if (X==0)
        {
            break;
        }
    }

    return 0;
}
