#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    if((int)s[0]>=97 && (int)s[0]<=122)
    {
        s[0]=(char)((int)s[0]-32);
    }
    cout << s << endl;
    return 0;
}