#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    long long int X, Y;

    while (cin >> X >> Y)
    {
        long long int diff = abs(X-Y);
        cout << diff << endl;
    }

    return 0;
}


