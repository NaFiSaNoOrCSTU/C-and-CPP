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
        string s,t;
        cin >> s;
        cin >> t;
        int i=0,j=0;
        for(int k=0;k<s.size();++k)
        {
            if(s[k] == t[j] && j<t.size())
            {
                j++;
            }
            if(s[k] == '?' && j<t.size())
            {
                s[k]=t[j];
                j++;
            }
            if(s[k] == '?' && j>=t.size())
            {
                s[k]=t[j-1];
            }
        }
        if(j == t.size())
        {
            cout << "YES" << endl;
            cout << s << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}