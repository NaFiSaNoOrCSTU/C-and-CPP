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
        vector<int> v(n);
        long long sum = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            sum += v[i];
        }
        if (sum % n != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        int x = sum / n;
        vector<int> v1(n, x);
        long long even_ind_sum = 0, odd_ind_sum = 0, even_ind_sum1 = 0, odd_ind_sum1 = 0;
        for (int i = 0; i < n; ++i)
        {
            if (i % 2 == 0)
            {
                even_ind_sum += v[i];
                even_ind_sum1 += v1[i];
            }
            else
            {
                odd_ind_sum += v[i];
                odd_ind_sum1 += v1[i];
            }
        }
        if ((even_ind_sum == even_ind_sum1) && (odd_ind_sum == odd_ind_sum1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}