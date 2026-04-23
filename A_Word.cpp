#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int cnt_up=0,cnt_low=0;
    for(int i=0;i<s.size();++i)
    {
        int c=(int)s[i];
        if(c>=65 && c<=90) cnt_up++;
        if(c>=97 && c<=122) cnt_low++;
    }
    if(cnt_up > cnt_low)
    {
        for(int i=0;i<s.size();++i)
        {
            int c=(int)s[i];
            if(c>=97 && c<=122)
            {
                cout << (char)(c-32);
            }
            else cout << s[i];
        }
        cout << endl;
    }
    else
    {
        for(int i=0;i<s.size();++i)
        {
            int c=(int)s[i];
            if(c>=65 && c<=90)
            {
                cout << (char)(c+32);
            }
            else cout << s[i];
        }
        cout << endl;
    }
    return 0;
}