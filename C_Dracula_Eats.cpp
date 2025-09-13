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
        if(n==1) cout << 0 << endl;
        else
        {
            int cnt=(n-2)/7;
            cout << cnt+1 << endl;
        }
    }
    return 0;
}