#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v(4);
        for (int i = 0; i < 4; ++i)
        {
            cin >> v[i];
        }
        map<int, int> mp;
        for (int i = 0; i < 4; ++i)
        {
            mp[v[i]]++;
        }
        if (mp[v[0]] == 4)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}