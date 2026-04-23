#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s.size() <= 10)
            cout << s << endl;
        else
        {
            int l = s.size();
            cout << s[0] << l - 2 << s[l - 1] << endl;
        }
    }
    return 0;
}