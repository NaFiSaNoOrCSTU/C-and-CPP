#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n];
    for(int i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    int count[100]={0};
    for(int i=0;i<n;++i)
    {
        int val=a[i];
        count[val]++;
    }
    for(int i=0;i<m;++i)
    {
        int val=a[i];
        printf("%d\n",count[val]);
    }
    return 0;
}