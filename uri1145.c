#include<stdio.h>

main()

{
    int X, Y, i, j, m = 1;

    scanf("%d %d", &X, &Y);

    for (i=1; i<Y; i++)
    {
        for (j=1; j<=X; j++)
        {
            if (j<X)
            {
                printf("%d ", m);
            }

            if (j==X)
            {
                printf("%d\n", m);
            }
            if (m==Y)
            {
                return;
            }
            m++;
        }


    }
}
