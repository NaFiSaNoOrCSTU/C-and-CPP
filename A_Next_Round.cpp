#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    if (v[0] != 0)
    {
        int cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            if (v[i] >= v[k - 1] && v[i]!=0)
                cnt++;
            else
                break;
        }
        cout << cnt << endl;
    }
    else
        cout << 0 << endl;
    return 0;
}