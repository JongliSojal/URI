#include<stdio.h>

int main()

{
    int X, Y, i;

    scanf("%d %d", &X, &Y);


    if (X<Y)
    {
        int count = (Y - X);
        for (i=1; i<=count; i++)
        {
            X++;

            if(X==Y)
            {
                break;
            }
            if (X%5==2 || X%5==3)
            {
                printf("%d\n", X);
            }
        }
    }

    if (X>Y)
    {
        int count = (X-Y);
        for (i=1; i<=count; i++)
        {
            Y++;
            if (Y==X)
            {
                break;
            }
            if (Y%5==2 || Y%5==3)
            {
                printf("%d\n", Y);
            }
        }
    }

    return 0;
}
