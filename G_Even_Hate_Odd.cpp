#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int step=-1;
        int even=0,odd=0;
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;++i)
        {
            cin >> a[i];
        }
        for(int i=0;i<n;++i)
        {
            if(a[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if((n/2)%2==0)
        {
            step=abs(even-(n/2));
        }
        cout << step << endl;
    }
    return 0;
}