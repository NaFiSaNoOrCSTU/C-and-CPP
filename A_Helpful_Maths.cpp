#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    vector<char> v;
    for(auto val:s)
    {
        if(val=='+') continue;
        else v.push_back(val);
    }
    sort(v.begin(),v.end());
    int l=v.size();
    for(int i=0;i<l-1;++i)
    {
        cout << v[i] << "+";
    }
    cout << v[l-1] << endl;
    return 0;
}