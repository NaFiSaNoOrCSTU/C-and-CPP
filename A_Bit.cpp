#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n;
    x = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if (s[0] == '+' || s[2] == '+')
            ++x;
        else
            --x;
    }
    cout << x << endl;
    return 0;
}