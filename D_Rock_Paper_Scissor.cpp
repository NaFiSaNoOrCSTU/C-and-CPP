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
        int round;
        cin >> round;
        int chef=0,chafina=0;
        string x,y;
        cin >> x >> y;
        for(int i=0;i<round;++i)
        {
            if((x[i]=='R' && y[i]=='S') || (x[i]=='P' && y[i]=='R') || (x[i]=='S' && y[i]=='P')) chef++;
            else if((x[i]=='R' && y[i]=='P') || (x[i]=='S' && y[i]=='R') || (x[i]=='P' && y[i]=='S')) chafina++;
        }
        int op=0;
        if(chef > chafina) cout << 0 << endl;
        else
        {
            while(chef<=chafina)
            {
                chef++;
                chafina--;
                op++;
            }
            cout << op << endl;
        }
    }
    return 0;
}
