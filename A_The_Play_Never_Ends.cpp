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
        int k;
        cin >> k;
        (k % 3 == 1) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}