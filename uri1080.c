#include<stdio.h>

int main()

{
    int N, i, position, major=0;

    for (i=1; i<=100; i++)
    {
        scanf("%d", &N);
        if(N>major)
        {
            position = i;
            major = N;
        }
        N++;
    }

    printf("%d\n", major);
    printf("%d\n", position);

    return 0;
}

