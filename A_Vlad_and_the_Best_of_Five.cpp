#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int c1=0,c2=0;
        for(auto val:s)
        {
            if(val == 'A') c1++;
            else c2++;
        }
        if(c1>c2) cout << "A" << endl;
        else cout << "B" << endl;
    }
    return 0;
}