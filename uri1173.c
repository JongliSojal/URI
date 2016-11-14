#include<stdio.h>

int main()

{
    int V, i;

    scanf("%d", &V);

    int N[10];

    for (i=0; i<10; i++)
    {
        printf("N[%d] = %d\n", i, V);
        V*=2 ;
    }

    return 0;
}
