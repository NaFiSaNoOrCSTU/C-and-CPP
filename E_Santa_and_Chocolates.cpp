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
        int n,k;
        cin >> n >> k;
        int a[n];
        int sum=0;
        int op=0;
        for(int i=0;i<n;++i)
        {
            cin >> a[i];
            sum += a[i];
        }
        if(sum==n) cout << "YES" << endl;
        int dif;
        while(dif>0)
        {
            dif=sum-n;
            sum=sum-n;
            op++;
        }
        if(k>=op) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
