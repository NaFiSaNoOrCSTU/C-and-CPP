#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    j=0;
   for(i=n-1;i>=0;--i)
    {
            b[j]=a[i];
            j++;
    }
    int count=0;
    for(i=0;i>=0;++i)
    {
            if(a[i]==b[i])
            {
                count++;
            }
    }
    if(count==n)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
