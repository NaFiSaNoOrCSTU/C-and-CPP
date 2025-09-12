#include <stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    long long int ar[N];
    for(i=0;i<N;++i)
    {
        scanf("%lld",&ar[i]);
    }
    long long int sum=0;
    for(i=0;i<N;++i)
    {
        sum=sum+ar[i];
    }
    if(sum<0)
    {
        printf("%lld\n",-sum);
    }
    else
    {
        printf("%lld\n",sum);
    }
    return 0;
}