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
        long long n,x,y;
        cin >> n >> x >> y;
        vector<long long> v(n);
        for(int i=0;i<n;++i)
        {
            cin >> v[i];
        }
        long long ans=0,sum=0;
        int l=0,r=n-1;
        while(l<r)
        {
            sum=0;
            for(int i=l+1;i<r;++i)
            {
                sum+=v[i];
            }
            if(sum>=x && sum<=y) ans++;
            l++;
        }
        cout << ans << endl;
    }
    return 0;
}