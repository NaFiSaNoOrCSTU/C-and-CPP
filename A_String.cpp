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
        string s;
        cin >> s;
        int op = 0;
        for (auto ch : s)
        {
            if (ch == '1')
                op++;
        }
        cout << op << endl;
    }
    return 0;
}