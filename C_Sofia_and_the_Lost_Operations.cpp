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
        cin >> n;
        vector<int> a(n), b(n);
        map<int, int> mpB, mpD;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }
        cin >> m;
        vector<int> d(m);
        for (int i = 0; i < m; ++i)
        {
            cin >> d[i];
            mpD[d[i]]++;
        }
        for (int i = 0; i < n; ++i)
        {
            if (a[i] != b[i])
            {
                mpB[b[i]]++;
            }
        }
        int flag = 0;
        for (auto val : mpB) // auto[x,y]:mpB
        {
            if (val.second > mpD[val.first])
            {
                flag = 1;
                break;
            }
        }
        if (find(b.begin(), b.end(), d[m - 1]) == b.end())
        {
            flag = 1;
        }
        (flag) ? cout << "NO" << endl : cout << "YES" << endl;
    }
    return 0;
}