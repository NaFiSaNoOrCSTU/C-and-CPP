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
        int two = 0, three = 0;
        long long sum = 0;
        for (auto ch : s)
        {
            sum += (ch - '0'); // string theke ber howa character k integer a convert kortesi
            if (ch == '2')
                two++;
            if (ch == '3')
                three++;
        }
        if (sum % 9 == 0)
        {
            cout << "YES" << endl;
            continue;
        }
        bool ans = false;
        for (int i = 0; i <= two; ++i)
        {
            for (int j = 0; j <= three; ++j)
            {
                if ((sum + (2 * i + 6 * j)) % 9 == 0) // 2 k square korle 2 barbe r 3 k square korle 6 barbe..tai shutro 2*two+6*three=needed value
                {
                    ans = true;
                    break;
                }
            }
        }
        ans == true ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}

