#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int sum=abs(a-a)+abs(a-b)+abs(a-c);
        int sum1=abs(b-a)+abs(b-b)+abs(b-c);
        int sum2=abs(c-a)+abs(c-b)+abs(c-c);
        int minimum=min({sum,sum1,sum2});
        cout << minimum << endl;
    }
    return 0;
}