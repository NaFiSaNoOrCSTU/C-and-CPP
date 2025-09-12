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
        if (v[0] == v[n - 1]) // As it is sorted..
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        string s(n, 'B');
        s[1] = 'R';
        cout << s << endl;
    }
    return 0;
}