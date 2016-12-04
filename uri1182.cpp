#include<iostream>
#include<cstdio>


using namespace std;

int main()
{
    int i, j, C;
    char o;
    double sum = 0, avg, M[12][12];

    cin >> C >> o;

    for (j=0 ; j<12; j++)
    {
        for (i=0; i<12; i++)
        {
            cin >> M[j][i];

            if (i==C)
            {
                sum += M[j][i];
            }
        }
    }

    avg = sum/12;

    if (o=='S') printf("%.1lf\n", sum);
    else printf("%.1lf\n", avg);

    return 0;
}

