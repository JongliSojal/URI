#include<iostream>

using namespace std;

int main()
{
    int i, T, N;

    while (cin >> T)
    {
        if (T==0)   break;

        else
        {
            for (i=1; i<=T; i++)
            {
                cin >> N;

                if (N%2==0) cout << N*2-2 << endl;

                else cout << N*2-1 << endl;

            }
        }
    }

    return 0;
}
