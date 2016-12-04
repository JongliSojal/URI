#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int i, j, caso=0, N, a, count;

    while (cin >> N)
    {
        count = 1;
        a=0;
        caso++;
        if (N==0)
        {
            printf("Caso %d: %d numero\n", caso, count);
            printf("%d\n\n", a);
        }

        else
        {
            for(i=1, count=1; i<=N; i++)
            {
                count += i;
            }

            printf("Caso %d: %d numeros\n", caso, count);
            printf("%d ", a);
            for (i=1, a=1; i<=N; i++)
            {
                for (j=1; j<=i; j++)
                {
                    if (i<N)
                    {
                        printf("%d ", a);
                        count++;
                    }

                    if (i==N)
                    {
                        if(j<i)
                        {
                            printf("%d ", a);
                            count++;
                        }

                        if(j==i)
                        {
                            printf("%d\n\n", a);
                            count++;
                        }
                    }
                }
                a++;
            }
        }
    }



    return 0;
}
