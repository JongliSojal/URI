#include<stdio.h>

int main()

{
    int force, C, i;
    char hero[50];

    scanf("%d", &C);

    for (i=1; i<=C; i++)
    {
        scanf("%s%d", &hero, &force);

        if (strcmp(hero, "Thor")==0)
        {
            printf("Y\n");
        }

        else
        {
            printf("N\n");
        }
    }

    return 0;
}
