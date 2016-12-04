#include<iostream>
#include<cstdio>


using namespace std;

int main()
{
    int i, j, a=12, b=-1;
    char c;
    double sum = 0, M[12][12];

    cin >> c;

    for (j=0 ; j<12; j++)
    {
        for (i=0; i<12; i++)
        {
            cin >> M[j][i];

            if (i>=a && i<=b)   sum += M[j][i];
        }
        a--;
        b++;
    }

    if (c=='S') printf("%.1lf\n", sum);
    else printf("%.1lf\n", sum/30);

    return 0;
}
