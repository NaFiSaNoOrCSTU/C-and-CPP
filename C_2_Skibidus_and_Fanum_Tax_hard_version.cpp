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
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; ++i)
        {
            cin >> b[i];
        }
        //         vector<int> cpyA;
        //         cpyA=a;
        //         int flag=0;
        //         b.sort();
        //         a[0]=min(a[0],b[0]-a[0]);
        //         for(int i=1;i<n;++i)
        //         {
        //             int search=a[i-1]+a[i];
        //             if(a[i]==search) continue;
        //             int l=0;
        //             int r=m;
        //             int tmp=-1;
        //             while(l<=r)
        //             {
        //                 int mid=(l+r)/2;
        //                 if(mid==search)
        //                 {
        //                     a[i]=b[mid]-a[i];
        //                     continue;
        //                 }
        //                 else if(b[mid]>search)
        //                 {
        //                     tmp=b[mid];
        //                     r=mid-1;
        //                 }
        //                 else if(b[mid]<search)
        //                 {
        //                     if(tmp!=-1)
        //                     l=mid+1;
        //                 }
        //             }
        //         }
        int flag = 1;
        sort(b.begin(), b.end());
        int x = min(a[0], b[0] - a[0]);
        for (int i = 1; i < n; ++i)
        {
            if (max(a[i], b[m - 1] - a[i]) < x)
            {
                cout << "NO" << endl;
                flag = 0;
                break;
            }
            int search = x + a[i];
            int ind = lower_bound(b.begin(), b.end(), search) - b.begin(); // ind er iterator return kore..evabeo likha jaito..(..,..,x+a[i])-b.begin()
            if (ind >= m)
                x = a[i];
            // ei part a if er por else hishebe kaj kore..means ..ind < m ekhane ind==b.end() likha jabe na cz eta int type
            else if (a[i] >= x)
                x = min(b[ind] - a[i], a[i]);
            else
                x = b[ind] - a[i];
        }
        if (flag)
            cout << "YES" << endl;
    }
    return 0;
}