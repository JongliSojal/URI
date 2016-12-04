#include<iostream>

using namespace std;

int main()
{
    unsigned long long int M, N, factM, factN;
    int i;

    while (cin >> M >> N)
    {
        for (i=1, factM=1; i<=M; i++)
        {
            factM *= i;
        }

        for (i=1, factN=1; i<=N; i++)
        {
            factN *= i;
        }

        cout << factM+factN << endl;
    }

    return 0;
}
