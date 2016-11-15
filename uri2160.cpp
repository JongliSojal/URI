#include<iostream>
#include<string.h>

using namespace std;

int main()

{
    string name;

    getline(cin, name);

    if (name.size()<=80)
    {
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
