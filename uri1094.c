#include<stdio.h>
#include<string.h>

int main()

{
    int N, i, num, sumC = 0, sumR = 0, sumS = 0, sum = 0;
    char name;

    scanf("%d", &N);

    for (i=1; i<=N; i++)
    {
        scanf("%d %c", &num, &name);


        if (name=='C')
        {
            sumC = sumC + num;
            sum = sum + num;
        }

        else if (name=='R')
        {
            sumR = sumR + num;
            sum = sum + num;
        }

        else if (name=='S')
        {
            sumS = sumS + num;
            sum = sum + num;
        }
    }

    printf("Total: %d cobaias\n", sum);
    printf("Total de coelhos: %d\n", sumC);
    printf("Total de ratos: %d\n", sumR);
    printf("Total de sapos: %d\n", sumS);
    printf("Percentual de coelhos: %.02lf %%\n", (100*(sumC/(double)sum)));
    printf("Percentual de ratos: %.02lf %%\n", (100*(sumR/(double)sum)));
    printf("Percentual de sapos: %.02lf %%\n", (100*(sumS/(double)sum)));

    return 0;

}

