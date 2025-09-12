#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n,k;
        cin >> n >> k;
        int time=((n-1)*k)+1;
        cout << time << endl;
    }
    return 0;
}