#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long x,y;
    cin >> x >> y;
    vector<long long> v(10);
    v[0]=x;
    v[1]=y;
    for(int i=2;i<10;++i)
    {
        v[i]=v[i-1]+v[i-2];
        if(v[i]/10 != 0)
        {
            string s=to_string(v[i]);
            reverse(s.begin(),s.end());
            long long num=stoll(s);
            v[i]=num;
        }
        //cout << v[i] << " ";
    }
    cout << v[9] << endl;
    return 0;
}