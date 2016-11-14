#include<stdio.h>

int main()

{
    int T, i, j, N[1000];

    scanf("%d", &T);


    if (T>=2 && T<=50)
    {
        int j = 0;
        for (i=0; i<1000; i++)
        {
            printf("N[%d] = %d\n", i, j);
            j++;

            if (j==T)
            {
                j = 0;
            }
        }
    }



    return 0;
}
