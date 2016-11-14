#include<stdio.h>

int main()

{
    int N, num = 1;

    scanf("%d", &N);

        while (num<=10000)
        {
            num++;
            if (num%N==2)
            {
                printf("%d\n", num);
            }

            else
            {
                continue;
            }
        }


    return 0;
}
