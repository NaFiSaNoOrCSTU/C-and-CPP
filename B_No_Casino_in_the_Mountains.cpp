#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t; 
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) 
        {
            cin >> v[i];
        }
        int hike = 0,cnt=0;
        for(int i=0;i<n;++i)
        {
            if(v[i]==0)
            {
                cnt++;
            }
            if(cnt==k)
            {
                hike++;
                cnt=0;
                i++;
            }
            if(v[i]==1 && cnt!=k)
            {
                cnt=0;
            }
        }
        cout << hike << endl;
    }
    return 0;
}
