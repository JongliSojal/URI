#include<iostream>

using namespace std;

int main()
{
    int i, N, days;
    double food;

    cin >> N;

    for (i=1, days=0; i<=N; i++)
    {
        days = 0;
        cin >> food;

        while (food>1)
        {
            food = food/2;
            days++;
        }

        cout << days << " dias" << endl;
    }

    return 0;
}
