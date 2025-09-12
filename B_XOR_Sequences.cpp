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
        long long int x, y;
        cin >> x >> y;
        for (int bit = 0; bit <= 30; ++bit)
        {
            if (((x >> bit) & 1) != ((y >> bit) & 1))
            {
                cout << (1LL << bit) << endl;
                break;
            }
        }
    }
    return 0;
}