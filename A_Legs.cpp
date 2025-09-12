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
        int ans = 0;
        int cow, chik;
        cow = n / 4;
        n = n % 4;
        chik = n / 2;
        cout << cow + chik << endl;
    }
    return 0;
}