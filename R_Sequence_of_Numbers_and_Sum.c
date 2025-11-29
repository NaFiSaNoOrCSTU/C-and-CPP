#include <stdio.h>
int main()
{
    int m,n,max,min,sum=0;
    while(1)
    {
        sum=0;
        scanf("%d %d",&m,&n);
        if(m<=0 || n<=0)
        {
            break;
        }
        else if(m>=n)
        {
            max=m;
            min=n;
        }
        else if(m<n)
        {
            max=n;
            min=m;
        }
        for(int i=min;i<=max;++i)
        {
            printf("%d ",i);
            sum=sum+i;
        }
        printf("sum =%d\n",sum);
    }
    return 0;
}