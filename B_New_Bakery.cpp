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
        long long int n, a, b;
        cin >> n >> a >> b;
        if (b <= a)
        {
            cout << n * a << endl;
            continue;
        }
        else
        {
            long long k = min(b - a + 1, n);
            cout << (b - k + 1) * n + k * (k - 1) / 2 << endl;
        }
        // else part is copied from tutorial
    }
    return 0;
}