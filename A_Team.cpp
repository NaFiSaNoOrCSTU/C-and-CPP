#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int cnt = n;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a == 0 && b == 0) || (a == 0 && c == 0) || (b == 0 && c == 0) || (a == 0 && b == 0 && c == 0))
            cnt--;
    }
    cout << cnt << endl;
    return 0;
}