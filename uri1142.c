#include<stdio.h>

int main()

{
    int N, i;
    scanf("%d", &N);

    int a = 1;
    int b = a + 1;
    int c = b + 1;

    for (i=1; i<=N; i++)
    {

        printf("%d %d %d PUM\n", a, b, c);
        a = c + 2;
        b = a + 1;
        c = b + 1;
    }

    return 0;

}
