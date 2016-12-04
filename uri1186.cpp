#include<iostream>
#include<cstdio>


using namespace std;

int main()
{
    int i, j, L=11;
    char c;
    double sum = 0, M[12][12];

    cin >> c;

    for (j=0 ; j<12; j++)
    {
        for (i=0; i<12; i++)
        {
            cin >> M[j][i];

            if (i>L)
            {
                sum += M[j][i];
            }
        }
        L--;
    }

    if (c=='S') printf("%.1lf\n", sum);
    else printf("%.1lf\n", sum/66);

    return 0;
}

