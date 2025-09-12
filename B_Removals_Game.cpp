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
        int n;
        cin >> n;
        deque<int> alice(n),bob(n);
        for(int i=0;i<n;++i)
        {
            cin >> alice[i];
        }
        for(int i=0;i<n;++i)
        {
            cin >> bob[i];
        }
        int step=1;
        while(step<n)
        {
            int tmp=alice[0];
            alice.pop_front(); 
            if(bob[0]!=tmp) bob.pop_front();
            else bob.pop_back();
            step++;
        }
    }
    return 0;
}