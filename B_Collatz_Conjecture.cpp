#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int x,y,k;
        cin >> x >> y >> k;
        while(k--)
        {
            x=x+1;
            if(x%y==0)
            {
                while(x%y==0)
                {
                    x=x/y;
                }
            }
        }
        cout << x << endl;
    }
    return 0;
}