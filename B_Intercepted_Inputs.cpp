#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        vector<int> v1;
        for(int i=0;i<n;++i)
        {
            if((n-2)%v[i]==0)
            {
                v1.push_back(v[i]);
            }
        }
        // for(auto val : v1)
        // {
        //     cout << val << " ";
        // }
        // cout << endl;
        // for(int i=0;i<v1.size()-1;++i)
        // {
        //     for(int j=i+1;j<v1.size();++j)
        //     {
        //         if((v1[i]*v1[j])==(n-2))
        //         {
        //             cout << v1[i] << " " << v1[j] << endl;
        //             break;
        //         }
        //     }
        // }
        sort(v1.begin(),v1.end());
        int l=0,r=v1.size()-1;
        while(l<=r)
        {
            int a=(n-2)/v1[l];
            if(v1[r]==a)
            {
                cout << v1[l] << " " << v1[r] << endl;
                break;
            }
            else if(v1[r]>a)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
    }
    return 0;
}
