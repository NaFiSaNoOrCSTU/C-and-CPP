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
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         set<int> s;
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> v[i];
//             s.insert(v[i]);
//         }
//         // sort(v.begin(),v.end());
//         int d = n / s.size();
//         int rem = n % s.size();
//         for (int i = 0; i < d; ++i)
//         {
//             for (auto val : s)
//             {
//                 cout << val << " ";
//             }
//         }
//         // int ind=0;
//         while (rem--)
//         {
//             cout << v[rem] << " ";
//             // ind++;
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
        int n;
        cin >> n;
        vector<int> vis(n + 1, false);
        int num = 1;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            if (vis[x])
            {
                while (vis[num])
                {
                    num++;
                }
                cout << num << " ";
                vis[num] = true;
            }
            else
            {
                cout << x << " ";
                vis[x] = true;
            }
        }
        cout << endl;
    }
    return 0;
}