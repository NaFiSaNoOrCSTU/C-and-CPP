#include <stdio.h>
int main()
{
    int t,n;
    long long int f=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=1;i<=n;++i)
        {
            f=f*i;
        }
        printf("%lld",f);
        printf("\n");
        f=1;
    }
    return 0;
}