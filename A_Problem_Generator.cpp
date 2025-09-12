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
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        map<char, int> mp;
        for (auto ch : s)
        {
            mp[ch]++;
        }
        int cnt = 0;
        string req = "ABCDEFG";
        for (auto ch : req)
        {
            if (mp[ch] < m)
            {
                cnt += (m - mp[ch]);
            }
        }
        cout << cnt << endl;
    }
    return 0;
}