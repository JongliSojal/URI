#include<stdio.h>

int main()
{
    int pass;

    while(pass=2002)
    {
        scanf("%d", &pass);
        if (pass!=2002)
        {
            printf("Senha Invalida\n");
        }

        if (pass==2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
    }

    return 0;
}
