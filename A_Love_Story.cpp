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
        string s, s1;
        cin >> s;
        s1 = "codeforces";
        int cnt = 0;
        for (int i = 0; i < 10; ++i)
        {
            if (s[i] != s1[i])
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}