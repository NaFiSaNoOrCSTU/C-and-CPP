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
        int ind=0,ind1=0;
        long long sum=0,ans=0;
        int n;
        cin >> n;
        vector<long long int> v(n);
        for(int i=0;i<n;++i)
        {
            cin >> v[i];
        }
        for(int i=0;i<n-1;++i)
        {
            for(int j=i+1;j<n;++j)
            {
                long long tmp=sum;
                sum += v[i]+v[j];
                if(sum%2 == 0)
                {
                    ans=max(tmp,sum);
                    ind=i;
                    ind1=j;
                }
            }
        }
        long long tmp1=ans;
        for(int i=0;i<n;++i)
        {
            if(v[i]%2==0)
            {
                ans=max(ans,v[i]);
                if(tmp1 != ans)
                {
                    ind=0;
                    ind1=0;
                }
            }
        }
        cout << (ind1-ind)+1 << endl;
    }
    return 0;
}