#include<stdio.h>

int main()

{
    int A, B, count = 0, inter = 0, gremio = 0, draw = 0, opt;
    while (scanf("%d %d", &A, &B))
    {
        count += 1;

        if (A==B)
        {
            draw += 1;
        }

        else if (A>B)
        {
            inter += 1;
        }

        else if (A<B)
        {
            gremio += 1;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &opt);

        if (opt==1)
        {
            continue;
        }

        else if (opt==2)
        {
            break;
        }
    }

    printf("%d grenais\n", count);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", draw);

    if (inter==gremio)
    {
        printf("Nao houve vencedor\n");
    }

    else if (inter>gremio)
    {
        printf("Inter venceu mais\n");
    }

    else if (inter<gremio)
    {
        printf("Gremio venceu mais\n");
    }

    return 0;
}
