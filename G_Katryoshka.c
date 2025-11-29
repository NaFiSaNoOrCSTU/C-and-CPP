#include <stdio.h>
int main()
{
    long long int n,m,k,num,num1;
    scanf("%lld %lld %lld",&n,&m,&k);
    if(n==1)
    {
        printf("1\n");
    }
    else if(n==0)
    {
        printf("0\n");
    }
    else
    {
        if(k>=m && n>=m)
        {
            num=m;
            k=k-m;
            n=n-m;
            if(n/2<=k)
            {
                num1=n/2;
            }
            else if(n/2>=k)
            {
                num1=k;
            }
            printf("%d\n",num+num1);
        }
        else if(k>=n && m>=n)
        {
            printf("%d\n",n);
        }
        else if(m>=k && n>=k)
        {
            printf("%d\n",k);
        }
    }
    return 0;
}