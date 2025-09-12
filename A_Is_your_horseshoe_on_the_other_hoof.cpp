#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<int> s;
    vector<int> v(4);
    for (int i = 0; i < 4; ++i)
    {
        cin >> v[i];
    }
    for (int i = 0; i < 4; ++i)
    {
        s.insert(v[i]);
    }
    cout << 4 - s.size() << endl;
    return 0;
}