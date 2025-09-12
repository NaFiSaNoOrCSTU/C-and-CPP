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
        int x, y, a;
        cin >> x >> y >> a;
        (a % (x + y) < x) ? cout << "NO" << endl : cout << "YES" << endl;
    }
    return 0;
}