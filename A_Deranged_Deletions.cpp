#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>v={2,25,43,3,43,23,2,32};
    rotate(v.begin(),v.begin()+1,v.end());
    for(int i;i<v.size();++i)
    {
        cout << v[i] << " ";
    }
    return 0;
}