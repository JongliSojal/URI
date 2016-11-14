#include<stdio.h>

int main()
{
    int i, j, N[20];

    for (i=0; i<20; i++)
    {
        scanf("%d", &N[i]);
    }

    for (i=19,j=0; j<20; j++)
    {
        printf("N[%d] = %d\n", j, N[i]);
        i--;
    }

    return 0;
}
