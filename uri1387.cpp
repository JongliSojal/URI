#include<iostream>

using namespace std;

int main()
{
    int L, R;

    while (cin >> L >> R)
    {
        if (L==0 && R==0) break;

        else cout << L+R << endl;
    }

    return 0;
}
