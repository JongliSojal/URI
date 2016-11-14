#include<stdio.h>

int main()

{
    int N, alc = 0, gas = 0, dis = 0;

    scanf("%d", &N);

    while(N!=4)
    {
        if (N==1)
        {
            alc = alc + 1;
        }

        else if (N==2)
        {
            gas = gas + 1;
        }

        else if (N==3)
        {
            dis = dis + 1;
        }

        else if (N==4)
        {
            break;
        }

        scanf("%d", &N);
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alc);
    printf("Gasolina: %d\n", gas);
    printf("Diesel: %d\n", dis);

    return 0;
}
