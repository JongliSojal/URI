#include<stdio.h>

int main()

{
    int X, Y, sum = 0;

    scanf ("%d %d", &X, &Y);

    if (X<Y)
    {
        int i, count = (Y - X);
        for (i=1; i<count; i++)
        {
            X++;
            if (X%2==1 || X%2==-1)
            {
                sum = sum + X;
            }
        }
        printf("%d\n", sum);
    }

    else if (X>Y)
    {
        int i, count = (X - Y);
        for (i=1; i<count; i++)
        {
            Y++;
            if (Y%2==1 || Y%2==-1)
            {
                sum = sum + Y;
            }
        }
        printf("%d\n", sum);
    }

    else if (X==Y)
    {
        printf("0\n");
    }

    return 0;
}
