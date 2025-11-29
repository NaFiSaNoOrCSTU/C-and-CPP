#include <stdio.h>
int main()
{
    int n,a,b,sum=0,sum1=0,rem;
    scanf("%d %d %d",&n,&a,&b);
    for(int i=1;i<=n;++i)
    {
        int temp=i;
        sum=0;
        while(temp!=0)
        {
            rem=temp%10;
            sum=sum+rem;
            temp=temp/10;
        }
        if(sum>=a && sum<=b)
        {
            sum1=sum1+i;
        }
    }
    printf("%d\n",sum1);
    return 0;
}