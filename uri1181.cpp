#include<iostream>
#include<cstdio>


using namespace std;

int main()
{
    int i, j, L;
    char c;
    double sum = 0, avg, M[12][12];

    cin >> L >> c;

    for (j=0 ; j<12; j++)
    {
        for (i=0; i<12; i++)
        {
            cin >> M[j][i];

            if (j==L)
            {
                sum += M[j][i];
            }
        }
    }

    avg = sum/12;

    if (c=='S') printf("%.1lf\n", sum);
    else printf("%.1lf\n", avg);

    return 0;
}
