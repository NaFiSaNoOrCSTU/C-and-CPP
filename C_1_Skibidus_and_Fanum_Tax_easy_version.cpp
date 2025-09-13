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
        vector<int> a(n), b(m);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; ++i)
        {
            cin >> b[i];
        }
        int cnt = 0;
        a[0] = min(a[0], b[0] - a[0]);
        for (int i = 1; i < n; ++i)
        {
            if (a[i] < a[i - 1])
            {
                a[i] = b[0] - a[i];
                if (a[i] < a[i - 1])
                {
                    cnt = 1;
                    break;
                }
            }
            else if (b[0] - a[i] >= a[i - 1])
            {

                a[i] = min(b[0] - a[i], a[i]);
            }
        }
        (cnt == 0) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}