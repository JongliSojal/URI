#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int i, QT;
    unsigned long long int N, M;

    string p1, p2, choice1, choice2;

    cin >> QT;

    for (i=1; i<=QT; i++)
    {
        cin >> p1 >> choice1 >> p2 >> choice2 >> N >> M;

        if (choice1.compare("PAR")==0)
        {
            if ((N+M)%2==0)
            {
                cout << p1 << endl;
            }
        }

        if (choice1.compare("IMPAR")==0)
        {
            if ((N+M)%2==1)
            {
                cout << p1 << endl;
            }
        }

        if (choice2.compare("PAR")==0)
        {
            if ((N+M)%2==0)
            {
                cout << p2 << endl;
            }
        }

        if (choice2.compare("IMPAR")==0)
        {
            if ((N+M)%2==1)
            {
                cout << p2 << endl;
            }
        }
    }

    return 0;
}
