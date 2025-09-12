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
        int n, m, k;
        cin >> n >> m >> k;
        if (n < k && m < k)
            cout << n * m << endl;
        else if (n > k && m > k)
            cout << k * k << endl;
        else if (n <= k <= m && m <= k <= n)
            cout << min(n, m) * k << endl;
    }
    return 0;
}