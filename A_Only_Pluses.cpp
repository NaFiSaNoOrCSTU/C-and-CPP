// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int test;
//     int a,b,c;
//     cin >> test;
//     while(test--)
//     {
//         int count=0,mul=1;;
//         cin >> a >> b >> c;
//         int sum_a=a,sum_b=b,sum_c=c;
//         int mx=max({a,b,c});
//         //cout << mx << endl;
//         int m=mx+1;
//         /*int m_a=(mx+1)-a;
//         int m_b=5-m_a;
//         int m_c=5-m_b;*/
//         if(a<mx)
//         {
//             while(count<=5)
//             {
//             while(sum_a!=m)
//             {
//                 sum_a++;
//                 count++;
//             }
//             }
//         }
//         if(count<5)
//         {
//         if(b<mx)
//         {
//             for(int i=1;i<=)
//             {
//             while(sum_b!=m)
//             {
//                 sum_b++;
//                 count++;
//             }
//             }
//         }
//         }
//         if(c<mx)
//         {
//             while(count<=5)
//             {
//             while(sum_c!=m)
//             {
//                 sum_c++;
//                 count++;
//             }
//             }
//         }
//         mul=sum_a*sum_b*sum_c;
//         cout << mul << endl;
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
        vector<int> v(3);
        for (int i = 0; i < 3; ++i)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < 5; ++i)
        {
            v[0] += 1;
            sort(v.begin(), v.end());
        }
        cout << v[0] * v[1] * v[2] << endl;
    }
    return 0;
}