#include<iostream>

using namespace std;

int main()
{
    unsigned long long int n, i, rem;

    cin >> n;

    while (n!=0)
    {
        rem = n%10;
        cout << rem;
        n /= 10;
    }

    cout << endl;

    return 0;
}
