#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        char ch[n];
        int sum=0;
        for(int i=0;i<n;++i)
        {
            cin >> ch[i];
        }
        char fq[26]={0};
        for(int i=0;i<n;++i)
        {
            if(fq[ch[i]-'A']==0)
            {
                sum+=2;
                fq[ch[i]-'A']++;
            }
            else
            {
                sum++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}