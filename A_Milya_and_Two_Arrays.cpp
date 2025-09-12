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
        vector<long long> a(n), b(n);
        set<long long> stA, stB;
        int flagA = 0, flagB = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            stA.insert(a[i]);
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
            stB.insert(b[i]);
        }
        for (int i = 0; i < n; ++i)
        {
            if (a[0] != a[i])
            {
                flagA = 1;
                break;
            }
        }
        for (int i = 0; i < n; ++i)
        {
            if (b[0] != b[i])
            {
                flagB = 1;
                break;
            }
        }
        if (flagA == 1 && flagB == 1)
            cout << "YES" << endl;
        else if (flagA == 1 && flagB == 0 && stA.size() >= 3)
            cout << "YES" << endl;
        else if (flagA == 1 && flagB == 0 && stA.size() < 3)
            cout << "NO" << endl;
        else if (flagA == 0 && flagB == 1 && stB.size() >= 3)
            cout << "YES" << endl;
        else if (flagA == 0 && flagB == 1 && stB.size() < 3)
            cout << "NO" << endl;
        else if (flagA == 0 && flagB == 0)
            cout << "NO" << endl;
    }
    return 0;
}