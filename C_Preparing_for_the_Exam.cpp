// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, m, k;
//         cin >> n >> m >> k;
//         vector<int> list(m), mono(k), cpy, ans, all(n);
//         for (int i = 0; i < m; ++i)
//         {
//             cin >> list[i];
//         }
//         for (int i = 0; i < k; ++i)
//         {
//             cin >> mono[i];
//         }
//         for (int i = 0; i < n; ++i)
//         {
//             all[i] = i + 1;
//         }
//         if (list == mono)
//         {
//             for (int i = 0; i < m; ++i)
//             {
//                 ans.push_back(1);
//             }
//         }
//         else
//         {
//             for (int i = 0; i < m; ++i)
//             {
//                 cpy = all;
//                 int ind = list[i] - 1;
//                 cpy.erase(cpy.begin() + ind);
//                 //      for(auto val:cpy)
//                 // {
//                 //     cout << val;
//                 // }
//                 // cout << endl;
//                 if (cpy == mono)
//                 {
//                     ans.push_back(1);
//                 }
//                 else
//                 {
//                     ans.push_back(0);
//                 }
//             }
//         }
//         for (auto val : ans)
//         {
//             cout << val;
//         }
//         cout << endl;
//     }
//     return 0;
// }
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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> list(m);
        for (int i = 0; i < m; ++i)
        {
            cin >> list[i];
        }
        map<int, int> mp;
        for (int i = 0; i < k; ++i)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        if (k == n)
        {
            for (int i = 0; i < m; ++i)
            {
                cout << 1;
            }
        }
        else if (k == n - 1)
        {
            for (int i = 0; i < m; ++i)
            {
                if (mp[list[i]])//for reducing time complexity then vector find function which is O(n),& it is O(logn)
                {
                    cout << 0;
                }
                else
                {
                    cout << 1;
                }
            }
        }
        else
        {
            for (int i = 0; i < m; ++i)
            {
                cout << 0;
            }
        }
        cout << endl;
    }
    return 0;
}