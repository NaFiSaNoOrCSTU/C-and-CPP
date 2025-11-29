#include <stdio.h>
long long int sum(int a[],int n,int i)
{
    long long int ans;
    if(i==n) return 0;
    return ans=sum(a,n,i+1)+a[i];
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    long long int ans=sum(a,n,0);
    printf("%lld\n",ans);
    return 0;
}