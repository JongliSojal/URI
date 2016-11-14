#include<stdio.h>

int main()

{
    int A, B, C;

    int i, temp, temp2;


    scanf("%d %d %d", &A, &B, &C);

    int M = A;
    int N = B;
    int O = C;


        for (i=0; i<3; i++)
        {
            if (A>B)
            {
                temp = A;
                A = B;
                B = temp;
            }

            if (B>C)
                {
                    temp2 = B;
                    B = C;
                    C = temp2;
                }

        }

        printf("%d\n%d\n%d\n\n", A , B, C);
        printf("%d\n%d\n%d\n", M, N, O);


    return 0;
}
