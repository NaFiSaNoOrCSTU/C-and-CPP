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
        int a[n];
        for(int i=0;i<n;++i)
        {
            cin >> a[i];
        }
        long long min=INT_MAX;
        for(int i=0;i<n-1;++i)
        {
            for(int j=i+1;j<n;++j)
            {
                long long sum=a[i]+a[j]+j-i;
                if(sum<min)
                {
                    min=sum;
                }
            }
        }
        cout << min << endl;
    }
    return 0;
}