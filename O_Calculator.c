#include <stdio.h>
int main()
{
    long long int a,b;
    char s;
    scanf("%lld %c %lld",&a,&s,&b);
    if(s=='+')
    {
        long long int sum=0;
        sum=a+b;
        printf("%lld\n",sum);
    }
    if(s=='-')
    {
        long long int sub=0;
        sub=a-b;
        printf("%lld\n",sub);
    }
    if(s=='*')
    {
        long long int mul=0;
        mul=a*b;
        printf("%lld\n",mul);
    }
    if(s=='/')
    {
        float div=0;
        div=a/b;
        printf("%.0f\n",div);
    }
    return 0;
}