#include<iostream>

using namespace std;

int main()

{
    int i, n, best, flag=0;
    unsigned long long int m;
    double note, highest;
    cin >> n;

    for (i=1, highest=8.0; i<=n; i++)
    {
        cin >> m >> note;

        if (note >= highest)
        {
            highest = note;
            best = m;
            flag = 1;
        }
    }

    if (flag==1)
    {
        cout << best << endl;
    }

    else
    {
        cout << "Minimum note not reached" << endl;
    }

    return 0;
}
