#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int sum=0,sum1=0;
        string s;
        cin >> s;
        sum=s[0]+s[1]+s[2];
        sum1=s[3]+s[4]+s[5];
        if(sum==sum1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}