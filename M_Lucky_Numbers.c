#include <stdio.h>
int main()
{
    int count=0,get=0,a,b,rem,num;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;++i)
    {
        num=i;
        count=0;
        while(num!=0)
        {
            rem=num%10;
            {
                if(rem==4 || rem==7)
                {
                    num=num/10;
                }
                else
                {
                    count++;
                    break;
                }
            }
        }
        if(count==0)
        {
            printf("%d ",i);
            get++;
        }
    }
    if(get==0)
    {
        printf("-1\n");
    }
    return 0;
}