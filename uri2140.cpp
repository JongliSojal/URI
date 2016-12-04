#include<iostream>

using namespace std;

int main()
{
    int N, M;

    while (cin >> N >> M)
    {
        if (N==0 && M==0)   break;

        else
        {
            if ((M-N)==200 || (M-N)==100 || (M-N)==40 || (M-N)==20 || (M-N)==10 || (M-N)==4)
            {
                cout << "possible" << endl;
            }

            else if ((M-N)== 150 || (M-N)== 120 || (M-N)== 110 || (M-N)== 105 || (M-N)== 102)
            {
                cout << "possible" << endl;
            }

            else if ((M-N)== 70 || (M-N)== 60 || (M-N)== 55 || (M-N)== 52)
            {
                cout << "possible" << endl;
            }

            else if ((M-N)== 30 || (M-N)== 25 || (M-N)== 22)
            {
                cout << "possible" << endl;
            }

            else if ((M-N)== 15 || (M-N)== 12)
            {
                cout << "possible" << endl;
            }

            else if ((M-N)== 7)
            {
                cout << "possible" << endl;
            }

            else
            {
                cout << "impossible" << endl;
            }
        }
    }

    return 0;
}
