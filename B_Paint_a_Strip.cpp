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
        for (int ans = 1, len = 1;; ans++, len = len * 2 + 2) // ei length er por por ekta ekta operation bare
        {
            if (len >= n)
            {
                cout << ans << endl;
                break;
            }
        }
    }
    return 0;
}