#include <stdio.h>
int main()
{
    int t,count=0;
    scanf("%d",&t);
    while(--t)
    {
        char s[100001];
        scanf("%s",s);
        int i=0;
        while(s[i]!='\0')
        {
            if(s[i]==0)
            {
                ++i;
                if(s[i]==1)
                {
                    ++i;
                    if(s[i]==0)
                    {
                        printf("Good\n");
                        count++;
                        break;
                    }
                }
            }
            else if(s[i]==1)
            {
                ++i;
                if(s[i]==0)
                {
                    ++i;
                    if(s[i]==1)
                    {
                        printf("Good\n");
                        break;
                    }
                }
            }
            ++i;
        }
    }
    if(count==0)
    {
        printf("Bad\n");
    }
    return 0;
}