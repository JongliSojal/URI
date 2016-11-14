#include<stdio.h>

int main()

{
    int X, i;

    while ((scanf("%d", &X)))
    {
        int sum = 0;
            if (X%2==0 && X!=0)
            {
                sum = sum + X + (X+2)+(X+4)+(X+6)+(X+8);
            }

            else if (X%2==1 || X%2==-1)
            {
                X++;
                sum = sum + X + (X+2)+(X+4)+(X+6)+(X+8);
            }

            else if (X==0)
            {
                break;
            }

        printf("%d\n", sum);

    }

    return 0;
}


