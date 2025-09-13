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
        vector<int> h(n);
        for(int i=0;i<n;++i)
        {
            cin >> h[i];
        }
        int stay=h[k-1];
        set<int> s;
        for(int i=0;i<n;++i)
        {
            if(h[i]>=stay)
            {
                s.insert(h[i]);
            }
        }
        bool can_touch=false;
        int prev=stay;
        for(auto val:s)
        {
            if((val-prev)>stay) can_touch=true;
            prev=val;
        }
        (can_touch) ? cout << "NO" << endl : cout << "YES" << endl;
    }
    return 0;
}