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
        long long int len = s.size();
        if (len == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        if (s[0] != '1')
        {
            cout << "NO" << endl;
            continue;
        }
        if (s[len - 1] == '9')
        {
            cout << "NO" << endl;
            continue;
        }
        bool valid=true;
        for (long long int i = 1; i < len - 1; ++i)
        {
            if (s[i] == '0')
            {
                valid=false;
                break;
            }
        }
        (valid) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}