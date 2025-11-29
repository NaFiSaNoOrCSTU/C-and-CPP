#include <stdio.h>
#include<math.h>
int main()
{
    long long int a,b,c,d,num1,num2;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    num1=pow(a,b);
    num2=pow(c,d);
    if(num1<=num2)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}