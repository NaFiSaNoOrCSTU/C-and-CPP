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
        int cnt[10] = {0};
        int digit;
        int flag = 1;
        for (int i = 0; i < n; ++i)
        {
            cin >> digit;
            cnt[digit]++;
            if (cnt[0] >= 3 && cnt[1] >= 1 && cnt[2] >= 2 && cnt[3] >= 1 && cnt[5] >= 1 && flag == 1)
            {
                cout << i + 1 << endl;
                flag = 0;
                continue;
            }
        }
        if (flag)
            cout << 0 << endl;
    }
    return 0;
}