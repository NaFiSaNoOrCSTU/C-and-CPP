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
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        int fav = v[f - 1];
        sort(v.rbegin(), v.rend());
        int first = 0, second = 0;
        for (int i = 0; i < k; ++i)
        {
            if (v[i] == fav)
            {
                first = 1;
                break;
            }
        }
        for (int i = k; i < n; ++i)
        {
            if (v[i] == fav)
            {
                second = 1;
                break;
            }
        }
        if (first == 1 && second == 1)
            cout << "MAYBE" << endl;
        else if (first == 1 && second == 0)
            cout << "YES" << endl;
        else if (first == 0 && second == 1)
            cout << "NO" << endl;
    }
    return 0;
}