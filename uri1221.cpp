#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    long int i, X;

    int j, N, prime;

    cin >> N;

    for (j=1; j<=N; j++)
    {
        cin >> X;


        if (X==2)
        {
            cout << "Prime" << endl;
        }

        else if (X==1 || X==0)
        {
            cout << "Not Prime" << endl;
        }


        else
        {

            for (i=2, prime=1; i<sqrt(X)+1; i++)
            {
                if (X%i==0)
                {
                    prime = 0;
                    break;
                }
            }

            if (prime==1)
            {
                cout << "Prime" << endl;
            }

            else
            {
                cout << "Not Prime" << endl;
            }
        }
    }

    return 0;
}
