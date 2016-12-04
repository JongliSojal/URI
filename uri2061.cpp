#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int i , N, M;
    string S;

    cin >> N >> M;

    for (i=1; i<=M; i++)
    {
        cin >> S;

        if (S.compare("fechou")==0)
        {
            N++;
        }

        if (S.compare("clicou")==0)
        {
            N--;
        }
    }

    cout << N << endl;

    return 0;
}
