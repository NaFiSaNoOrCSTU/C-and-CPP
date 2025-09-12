#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i=0;i<n;++i)
    {
        cin >> v[i];
    }
    int x;
    string y;
    cin >> x;
    cin >> y;
    //cout << v[x-1];
    if(v[x-1] == y) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}