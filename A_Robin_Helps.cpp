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
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        int has = 0, give = 0;
        for (int i = 0; i < n; ++i)
        {
            if (v[i] >= k)
            {
                has += v[i];
            }
            else if (v[i] == 0)
            {
                if (has)
                {
                    give++;
                    has--;
                }
            }
        }
        cout << give << endl;
    }
    return 0;
}