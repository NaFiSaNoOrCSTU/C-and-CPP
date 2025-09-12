#include <bits/stdc++.h>
using namespace std;
long long n, m;
long long dx[] = {-1, 0, 1, 0};
long long dy[] = {0, -1, 0, 1};
bool valid(long long i, long long j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        long long a[n][m];
        for (long long i = 0; i < n; ++i)
        {
            for (long long j = 0; j < m; ++j)
            {
                cin >> a[i][j];
            }
        }
        for (long long i = 0; i < n; ++i)
        {
            for (long long j = 0; j < m; ++j)
            {
                long long mx = 0;
                for (int k = 0; k < 4; ++k)
                {
                    long long ci = i + dx[k];
                    long long cj = j + dy[k];
                    if (valid(ci, cj))
                    {
                        mx = max(mx, a[ci][cj]);
                    }
                }
                a[i][j] = min(a[i][j], mx);
            }
        }
        for (long long i = 0; i < n; ++i)
        {
            for (long long j = 0; j < m; ++j)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}