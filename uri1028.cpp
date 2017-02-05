#include<iostream>

using namespace std;

int main()
{
    int i, N, a, b;
    cin >> N;
    for(i=1; i<=N; i++){
        cin >> a >> b;
        while(a!=b){
            if(a>b){
                a-=b;
            }
            else{
                b-=a;
            }
        }
        cout << a << endl;
    }
    return 0;
}
