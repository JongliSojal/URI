#include<iostream>
#include<cstdio>


using namespace std;

int main()
{
    int i, j, a=11, b=0;
    char c;
    double sum = 0, M[12][12];

    cin >> c;

    for (j=0 ; j<12; j++)
    {
        for (i=0; i<12; i++)
        {
            cin >> M[j][i];

            if (j>=1 && j<=5)
            {
                if (i>a)    sum += M[j][i];
            }

            if (j>=6 && j<=10)
            {
                if (i>b)    sum += M[j][i];
            }
        }
        a--;
        b++;
    }

    if (c=='S') printf("%.1lf\n", sum);
    else printf("%.1lf\n", sum/30);

    return 0;
}
