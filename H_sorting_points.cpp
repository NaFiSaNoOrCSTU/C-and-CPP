#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    multiset<pair<long,long>> mt;
    while(n--)
    {
        long long x,y;
        cin >> x >> y;
        mt.insert({x,y});
    }
    for(auto a:mt)
    {
        cout << a.first << " " << a.second << endl;
    }
    return 0;
}