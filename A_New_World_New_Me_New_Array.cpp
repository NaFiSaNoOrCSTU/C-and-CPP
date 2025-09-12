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
        int n, k, p;
        cin >> n >> k >> p;
        if (k < 0)
            k = -1 * k;
        if (k % p == 0 && (k / p) <= n)
            cout << k / p << endl;
        else if (k % p != 0 && ((k / p) + 1) <= n)
            cout << (k / p) + 1 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}