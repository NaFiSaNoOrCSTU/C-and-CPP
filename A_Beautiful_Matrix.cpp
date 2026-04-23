#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,ans=0;
    for(int i=1;i<=5;++i)
    {
        for(int j=1;j<=5;++j)
        {
            cin >> x;
            if(x==1)
            {
                ans=abs(3-i)+abs(3-j);
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}