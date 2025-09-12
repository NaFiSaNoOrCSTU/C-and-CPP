/*#include <stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int size;
        int count=0;
        scanf("%d",&size);
        getchar();
        char pass[size+1];
        scanf("%s",&pass);
        for(int i=0;i<size;++i)
        {
            if((pass[i]>='a' && pass[i]<='z') || (pass[i]>='0' && pass[i]<='9'))
            {
                count=0;
            }
            else
            {
                count=1;
                //break;
            }
        }
        /*if(count==1)
        {
            printf("NO\n");
        }
        for(int i=0;i<size;++i)
        {
            if(pass[i]>='a' && pass[i]<='z')
            {
                if(pass[i+1]>='0' && pass[i+1]<='9')
                {
                    count=1;
                    //break;
                }
            }
        }
           if(count==1)
        {
            printf("NO\n");
        }
        for(int i=0;i<size;++i)
        {
            if(pass[i]>pass[i+1])
            {
                count=1;
                //break;
            }
        }
        if(count==1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}*/

#include <bits/stdc++.h>

using namespace std;



int main()
{
    int test,pos;
    cin >> test;
    while(test--)
    {
        string s,x;
        cin >> s >> x;
        int index=s.find("x");
        int len=x.length();
        s.replace(index,len,"#");
        cout << s << endl;
    }

    return 0;
}
