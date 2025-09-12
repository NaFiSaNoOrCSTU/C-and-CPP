// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int test;
//     cin >> test;
//     while (test--)
//     {
//         long long int x, y, x1, y1;
//         cin >> x >> y >> x1 >> y1;
//         int count = 0;
//         for (long long int i = 1; i <= x1; ++i)
//         {
//             for (long long int j = y; j <= y1; ++j)
//             {
//                 if (i == j)
//                 {
//                     count++;
//                     break;
//                 }
//             }
//         }

//         for (long long int i = 1; i <= x1; ++i)
//         {
//             for (long long int j = x; j <= x1; ++j)
//             {
//                 if (i == j)
//                 {
//                     count++;
//                     break;
//                 }
//             }
//         }

//         if (count == 0)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
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
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        ((x1 > y1 && x2 > y2) || (x1 < y1 && x2 < y2)) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}