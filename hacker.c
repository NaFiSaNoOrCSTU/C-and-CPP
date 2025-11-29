#include <stdio.h>

int main() {
int t;
    long long int m,a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&m);
        scanf("%lld",&a);
        scanf("%lld",&b);
        scanf("%lld",&c);
        long long int mul=a*b*c;
        int flag=0,i;
        if(m<mul && m!=0)
        {
            printf("-1\n");
            //break;
        }
        else if(m>=mul || m==0)
        {
            for(i=0;i<=mul;++i)
            {
                if(mul*i==m)
                {
                    flag++;
                    break;
                }
            }
            if(flag==1)
        {
            printf("%d\n",i);
        }
        else
        {
            printf("-1\n");
        }
        }
    }
    return 0;
}