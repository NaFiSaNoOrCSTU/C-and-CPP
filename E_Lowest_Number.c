#include <stdio.h>
#include<limits.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;++i)
    {
        scanf("%d",&a[i]);
    }
    int mn=INT_MAX,pos;
    for(int i=0;i<N;++i)
    {
        if(a[i]<mn)
        {
            mn=a[i];
            pos=i+1;
        }
    }
    printf("%d %d\n",mn,pos);
    return 0;
}