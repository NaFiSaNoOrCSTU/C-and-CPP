#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        long long sum=0,sum1=0;
        int n,x;
        cin >> n >> x;
        int t1=n-x;
        for(int i=1;i<=t1;++i)
        {
            sum += pow(2,i);
        }
        for(int i=1;i<=x;++i)
        {
            sum1 += pow(2,n);
            n=n-1;
        }
        cout << sum1-sum << endl;
    }
    return 0;
}