#include <stdio.h>
int minimum(int a[],int n)
{
    int min=100000;
    for(int i=0;i<n;++i)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    return min;
}
int maximum(int a[],int n)
{
    int max=0;
    for(int i=0;i<n;++i)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
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
    int min=minimum(a,n);
    int max=maximum(a,n);
    printf("%d %d\n",min,max);
    return 0;
}