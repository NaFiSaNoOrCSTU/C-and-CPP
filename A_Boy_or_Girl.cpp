#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string st;
    cin >> st;
    set<char> s;
    for(auto val:st)
    {
        s.insert(val);
    }
    int l=s.size();
    (l%2==0) ? cout << "CHAT WITH HER!" << endl : cout << "IGNORE HIM!" << endl;
    return 0;
}