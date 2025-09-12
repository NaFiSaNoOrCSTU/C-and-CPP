#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        int sum[n-1]={0},temp=0,sum1[n-1];
        int m=0;
        for(int i=2;i<=n;i++)
        {
            int k=1;
            for(int j=i*k;j<=n;j=i*k)
            {
                sum[m]+=j;
                ++k;
            }
            ++m;
        }
        for(int i=0;i<n-1;++i)
        {
            sum1[i]=sum[i];
        }
        sort(sum,sum+(n-1));
        for(int i=0;i<n-1;++i)
        {
            if(sum1[i]==sum[n-2])
            {
                temp=i;
                break;
            }
        }
        cout << temp+2 << endl;
    }
    return 0;
}