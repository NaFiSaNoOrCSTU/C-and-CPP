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
        int n,i,j,k,sum;
        int a[101][101];
        for(int x =0;x<101;++x)
        {
            for(int y=0;y<101;++y)
            {
                a[x][y]=0;
            }
        }
        cin >> n;
        while(n--)
        {
            cin >> i >> j >> k;
            sum=0;
            for(int p=1;p<=k;++p)
            {
                for(int b=i+1;b<=j;++b)
                {
                    a[p][b]==1;
                }
            }
            for(int p=1;p<101;++p)
            {
                for(int b=0;b<101;++b)
                {
                    if(a[p][b]==1)
                    {
                        sum++;
                    }
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}