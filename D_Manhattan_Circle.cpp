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
        char a[n][m];
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> a[i][j];
            }
        }
        int f1, f2, l1;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (a[i][j] == '#')
                {
                    f1 = i;
                    f2 = j;
                    break;
                }
            }
        }
        for (int i = n - 1; i >= 0; --i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (a[i][j] == '#')
                {
                    l1 = i;
                    break;
                }
            }
        }
        cout << ((f1 + l1) / 2) + 1 << " " << f2 + 1 << endl;
    }
    return 0;
}