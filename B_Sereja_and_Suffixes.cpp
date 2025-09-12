#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,l;
    cin >> n >> l;
    int a[n];
    for(int i=0;i<n;++i)
    {
        cin >> a[i];
    }
    set<int> s;
    while(l--)
    {
        int pos;
        cin >> pos;
        for(int i=pos-1;i<n;++i)
        {
            s.insert(a[i]);
        }
        cout << s.size() << endl;
        s.clear();
    }
    return 0;
}