#include<stdio.h>

int main()

{
    int X, Y;

    scanf("%d %d", &X , &Y);

    while (X!=0 || Y!=0)
    {
        if (X>0)
        {
            if (Y>0)
            {
                printf("primeiro\n");
            }



            else if (Y<0)
            {
                printf("quarto\n");
            }

            scanf("%d %d", &X, &Y);

        }

        if (X<0)
        {
            if (Y>0)
            {
                printf("segundo\n");

            }

            else if (Y<0)
            {
                printf("terceiro\n");

            }

            scanf("%d %d", &X, &Y);
        }

        if (X==0 || Y==0)
        {
            break;
        }
    }

    return 0;

}
