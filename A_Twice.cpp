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
        int n;
        cin >> n;
        map<int, int> mp;
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        int cnt = 0;
        for (auto val : mp)
        {
            cnt += val.second / 2;
        }
        cout << cnt << endl;
    }
    return 0;
}