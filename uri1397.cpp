#include<iostream>

using namespace std;

int main()
{
    int i, N, A, B, p1, p2;

    while (cin >> N)
    {
        if (N==0)   break;

        else
        {
            for (i=1, p1=0, p2=0; i<=N; i++)
            {
                cin >> A >> B;

                if (A>B)   p1 += 1;
                if (A<B)   p2 += 1;
            }

            cout << p1 << " " << p2 << endl;
        }
    }
    return 0;
}
