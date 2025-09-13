#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int negative=0,positive=0,neutral=0;
        int num;
        cin >> num;
        int a[num],b[num],count[num]={0};
        for(int i=0;i<num;++i)
        {
            cin >> a[i];
        }
        for(int i=0;i<num;++i)
        {
            cin >> b[i];
        }
        for(int i=0;i<num;++i)
        {
            count[i]=a[i]+b[i];
        }
        for(int i=0;i<num;++i)
        {
            if(count[i]>=1)
            {
                positive++;
            }
            else if(count[i]==0)
            {
                neutral++;
            }
            else if(count[i]<=-1)
            {
                negative++;
            }
        }
        if(positive>0)
        {
            cout << "1" << endl;
        }
        if(positive ==0 && neutral>0)
        {
            cout << "0" << endl;
        }
        if(positive ==0 && neutral==0 && negative>0)
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
