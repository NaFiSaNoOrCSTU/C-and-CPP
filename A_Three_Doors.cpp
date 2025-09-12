#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int key;
    cin >> key;
    int a[4];
    for(int i=1;i<4;++i)
    {
        cin >> a[i];
    }
    if(a[key]==0)
    {
        cout << "NO" << endl;
        return;
    }
    key=a[key];
    if(a[key]==0)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        solve();
    }
    return 0;
}