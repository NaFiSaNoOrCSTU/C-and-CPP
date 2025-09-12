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
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        int op = 0, sub = 0;
        for (int i = 0; i < n; ++i)
        {
            if (v[i] != 0 && sub == 0)
            {
                op++;
                sub = 1;
            }
            if (v[i] == 0)
            {
                sub = 0;
            }
        }
        (op > 2) ? cout << 2 << endl : cout << op << endl;
    }
    return 0;
}