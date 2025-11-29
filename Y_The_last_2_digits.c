#include <stdio.h>
int main()
{
    long long int a,b,c,d,mul;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    mul=a*b*c*d;
    printf("%lld\n",mul%100);
    return 0;
}