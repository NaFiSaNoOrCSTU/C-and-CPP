#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a,b;
    cin >> a >> b;
    int ans=0;
    for(int i=0;i<a.size();++i)
    {
        if((int)a[i]>=65 && (int)a[i]<=90)
        {
            a[i]=(char)((int)a[i]+32);
        }
    }
    for(int i=0;i<a.size();++i)
    {
        if((int)b[i]>=65 && (int)b[i]<=90)
        {
            b[i]=(char)((int)b[i]+32);
        }
    }
    for(int i=0;i<a.size();++i)
    {
        if(a[i]<b[i])
        {
            ans=-1;
            break;
        }
        else if(a[i]>b[i])
        {
            ans=1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}