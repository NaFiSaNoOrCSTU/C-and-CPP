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
        int x;
        cin >> x;
        vector<int> v;
        while(x!=0)
        {
            int tmp;
            tmp=x%10;
            v.push_back(tmp);
            x=x/10;
        }
        int mn=*min_element(v.begin(),v.end());
        cout << mn << endl;
    }
    return 0;
}