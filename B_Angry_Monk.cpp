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
        vector<int> v(k);
        int mx = -1;
        for (int i = 0; i < k; ++i)
        {
            cin >> v[i];
            mx = max(mx, v[i]);
        }
        cout << 2 * (n - mx) - k + 1 << endl;
    }
    return 0;
}