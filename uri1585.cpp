#include<iostream>

using namespace std;

int main()
{
    int i, N, x, y;

    cin >> N;

    for (i=1; i<=N; i++)
    {
        cin >> x >> y;

        cout << (x*y)/2 << " cm2" << endl;
    }

    return 0;
}
