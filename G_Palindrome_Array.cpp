#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool flag=true;
    int n;
    cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;++i)
    {
        cin >> a[i];
    }
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(a[i]==a[j])
        {
            ++i;
            --j;
        }
        else
        {
            flag=false;
            break;
        }
    }
    if(flag==true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}