#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    char v[3][3];
    while(t--)
    {
        for(int i=0;i<3;++i)
        {
            for(int j=0;j<3;++j)
            {
                cin >> v[i][j];
            }
        }
        int a=0,b=0,c=0;
        for(int i=0;i<3;++i)
        {
            for(int j=0;j<3;++j)
            {
                if(v[i][j] == 'A')
                {
                    a++;
                }
                if(v[i][j] == 'B')
                {
                    b++;
                }
                if(v[i][j] == 'C')
                {
                    c++;
                }
            }
        }
        if(a<3) cout << "A" << endl;
        else if(b<3) cout << "B" << endl;
        else if(c<3) cout << "C" << endl;
    }
    return 0;
}