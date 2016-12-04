#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int N;
    string text = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    cin >> N;

    cout << text.substr(0,N) << endl;


    return 0;
}
