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
        string sub="FFT";
        string sub1="NTT";
        size_t pos=s.find(sub);
        size_t pos1=s.find(sub1); // auto pos1=s.find(sub1)
        if(pos == string::npos && pos1 == string::npos) // npos means 'NOT FOUND'
        {
            cout << s << endl;
        }
        else
        {
            sort(s.rbegin(),s.rend());
            cout << s << endl;
        }
    }
    return 0;
}