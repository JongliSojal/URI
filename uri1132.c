#include<stdio.h>

int main()

{
    int X, Y, sum = 0;

    scanf ("%d %d", &X, &Y);

    if (X<Y)
    {
        int i, count = (Y - X);
        for (i=1; i<=count+1; i++)
        {
            if (X%13!=0)
            {
                sum = sum + X;
            }
            X++;
        }

        printf("%d\n", sum);
    }

    else if (X>Y)
        {
            int i, count = (X - Y);
            for (i=1; i<=count+1; i++)
            {
                if (Y%13!=0)
                {
                    sum = sum + Y;
                }
                Y++;
            }
            printf("%d\n", sum);
        }

    return 0;
}
