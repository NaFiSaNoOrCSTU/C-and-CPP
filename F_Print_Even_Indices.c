#include <stdio.h>
void reverse(int a[],int n)
{
    if(n==0)
    {
        printf("%d\n",a[0]);
        return;
    }
    printf("%d ",a[n]);
    reverse(a,n-2);
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
    if(n%2==0)
    {
        reverse(a,n-2);
    }
    else
    {
        reverse(a,n-1);
    }
    return 0;
}