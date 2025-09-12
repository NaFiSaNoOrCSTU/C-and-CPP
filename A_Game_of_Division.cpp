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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        bool ans = false;
        int pos;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; ++i)
        {
            int cnt = 0;
            for (int j = 0; j < n; ++j)
            {
                if (abs(v[i] - v[j]) % k != 0)
                {
                    cnt++;
                }
            }
            if (cnt == (n - 1))
            {
                ans = true;
                pos = i + 1;
                break;
            }
        }
        if (ans)
            cout << "YES" << endl
                 << pos << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}