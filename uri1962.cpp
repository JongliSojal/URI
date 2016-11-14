#include<iostream>

using namespace std;

int main()

{
    long long int N, i, T;

    cin >> N;

    for (i=1; i<=N; i++)
    {
        cin >> T;

        if (T<2015)
        {
            cout << (2015 - T) << " D.C." << endl;
        }

        else if (T>=2015)
        {
            cout << (T - 2015+1) << " A.C." <<endl;
        }
    }

    return 0;
}
