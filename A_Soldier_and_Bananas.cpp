#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long k,n,w;
    cin >> k >> n >> w;
    long long cost=0;
    for(int i=1;i<=w;++i)
    {
        cost+=(i*k);
    }
    long long ans=cost-n;
    if(ans<=0) cout << 0 << endl;
    else cout << ans << endl;
    return 0;
}