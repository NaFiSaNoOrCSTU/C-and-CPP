#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin >> x;
    if(x==1 || x==2 || x==3 || x==4 || x==5) cout << 1 << endl;
    else cout << ceil(x/5.0) << endl;
    return 0;
}