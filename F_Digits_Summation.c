#include <stdio.h>
int main()
{
    long long int n,m;
    scanf("%lld %lld",&n,&m);
    long long int num1=n%10;
    long long int num2=m%10;
    long long int sum=num1+num2;
    printf("%lld\n",sum);
    return 0;
}