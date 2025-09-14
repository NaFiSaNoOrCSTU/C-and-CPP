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
        long long n;
        cin >> n;
        vector<long long> v;
        __int128 ans = 0;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
                ans += x;
            else
            {
                v.push_back(x);
            }
        }
        sort(v.rbegin(), v.rend());
        if (v.size() == 0)
            cout << 0 << endl;
        else if (v.size() == 1)
        {
            ans += v[0];
            cout << (long long)ans << endl;
        }
        else if (v.size() > 1)
        {
            if (v.size() % 2 == 0)
            {
                for (int i = 0; i < (v.size() / 2); ++i)
                {
                    ans += v[i];
                }
            }
            else
            {
                int l = v.size();
                l += 1;
                for (int i = 0; i < (l / 2); ++i)
                {
                    ans += v[i];
                }
            }
            cout << (long long)ans << endl;
        }
    }
    return 0;
}