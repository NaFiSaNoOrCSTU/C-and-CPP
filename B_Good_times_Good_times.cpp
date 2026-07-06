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
        int x,tmp,dg=0;
        cin >> x;
        tmp=x;
        while(tmp)
        {
            tmp/=10;
            dg++;
        }
        if(dg==1) cout << 10 << endl;
        else
        {
            cout << 1;
            for(int i=1;i<dg;++i) cout << 0;
            cout << 1 << endl;
        }
    }
    return 0;
}