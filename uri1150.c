#include<stdio.h>

int main()

{
    int X, Z, sum, count = 1;

    scanf("%d", &X);

    while (scanf("%d", &Z))
    {
        if (Z>X)
        {
            break;
        }
    }

    for (sum = X; sum<=Z; sum+= ++X)
    {
        count += 1;
    }

    printf("%d\n", count);

    return 0;
}
