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
        long long n;
        int d;
        cin >> n >> d;
        vector<int> ans;
        ans.push_back(1);
        if (n >= 3 || d % 3 == 0)
            ans.push_back(3);
        if (d == 5)
            ans.push_back(5);
        if (d == 7 || n >= 3)
            ans.push_back(7);
        if (d == 9 || n >= 6 || (n >= 3 && d % 3 == 0))
            ans.push_back(9);
        for (auto val : ans)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}