#include<stdio.h>

int main()
{
    int X, Y, i;

    for (;i=1; i++)
    {
        scanf("%d %d", &X, &Y);
        if (X<Y)
        {
            printf("Crescente\n");
        }

        if (X>Y)
        {
            printf("Decrescente\n");
        }

        if (X==Y)
        {
            break;
        }
    }

    return 0;

}
