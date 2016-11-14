#include<stdio.h>



int main()
{
    int count,i;

    scanf("%d", &count);

    for (i=1; i<=count; i++)
    {

        if (i<count)
        {
             printf("Ho ");
        }

        else if (i==count)
        {
            printf("Ho!\n");
        }
    }

    return 0;


}

