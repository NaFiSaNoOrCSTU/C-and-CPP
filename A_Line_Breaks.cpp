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
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            string s;
            cin >> s;
            if (s.size() <= m && m > 0)
            {
                ans++;
                m -= s.size();
            }
            else
            {
                m = -1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
