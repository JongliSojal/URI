#include<iostream>

using namespace std;

int main()

{
    unsigned long long int P;

    while (cin >> P)
    {
        if (P==-1)
        {
            break;
        }

        else if (P==0)
        {
              P = 0;
        }

        else if (P==1)
        {
            P = 0;
        }

        else
        {
            P -= 1;
        }

        cout << P << endl;
    }

    return 0;
}
