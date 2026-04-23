#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int w;
    cin >> w;
    if (w == 2)
        cout << "NO" << endl;
    else
        (w % 2 == 0) ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}