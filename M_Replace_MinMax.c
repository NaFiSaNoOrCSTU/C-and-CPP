#include <stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    //minimmum--->
    int min=INT_MAX;
    for(int i=0;i<n;++i)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    //printf("%d\n",min);
    //maximum--->
    int max=INT_MIN;
    for(int i=0;i<n;++i)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    //printf("%d\n",max);
    //finding index--->
    int ind,ind1;
    for(int i=0;i<n;++i)
    {
        if(a[i]==min)
        {
            ind=i;
            break;
        }
    }
    for(int i=0;i<n;++i)
    {
        if(a[i]==max)
        {
            ind1=i;
            break;
        }
    }
    //printf("%d %d",ind,ind1);
    //after swapping--->
    a[ind]=max;
    a[ind1]=min;
    for(int i=0;i<n;++i)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
