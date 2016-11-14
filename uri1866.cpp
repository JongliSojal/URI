#include<iostream>

using namespace std;

int main()

{
    int i, j, C, N, S;
    cin >> C;

    for (i=1; i<=C; i++)
    {
        cin >> N;

        for (j=1, S=0; j<=N; j++)
        {
            if (j%2==1)
            {
                S += 1;
            }

            if (j%2==0)
            {
                S += -1;
            }
        }

        cout << S << endl;

    }

    return 0;
}
