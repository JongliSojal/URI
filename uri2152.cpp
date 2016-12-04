#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int i, T, h, m, o;

    cin >> T;

    for (i=1; i<=T; i++)
    {
        cin >> h >> m >> o;

        if (o==1)
        {
            cout << setw(2) << setfill('0') << h << ":";
            cout << setw(2) << setfill('0') << m << " - A porta abriu!" << endl;
        }
        else
        {
            cout << setw(2) << setfill('0') << h << ":";
            cout << setw(2) << setfill('0') << m << " - A porta fechou!" << endl;
        }
    }

    return 0;
}
