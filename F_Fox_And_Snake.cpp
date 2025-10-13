#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin >> r >> c;
    for(int i=1;i<=r;++i)
    {
        if(i%2==1)
        {
            for(int j=1;j<=c;++j)
            {
                cout << "#";
            }
        }
        else
        {
            if(i%4==0)
            {
                cout << "#";
                for(int j=2;j<=c;++j)
                {
                    cout << ".";
                }
            }
            else
            {
                for(int j=1;j<=c-1;++j)
                {
                    cout << ".";
                }
                cout << "#";
            }
        }
        cout << "\n";
    }
    return 0;
}