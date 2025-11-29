#include <stdio.h>
int main()
{
    long long int a,b,c;
    char s,q;
    scanf("%lld %c %lld %c %lld",&a,&s,&b,&q,&c);
    if(s=='+')
    {
        if(a+b==c)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%lld\n",a+b);
        }
    }
    else if(s=='-')
    {
        if(a-b==c)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%lld\n",a-b);
        }
    }
    else if(s=='*')
    {
        if(a*b==c)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%lld\n",a*b);
        }
    }
    return 0;
}