#include <stdio.h>
int main()
{
    int t,x,y,sum=0,max,min;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        scanf("%d %d",&x,&y);
        if(x>=y)
        {
            max=x;
            min=y;
        }
        else
        {
            max=y;
            min=x;
        }
        for(int i=min+1;i<max;++i)
        {
            if(i%2==1)
            {
                sum=sum+i;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}