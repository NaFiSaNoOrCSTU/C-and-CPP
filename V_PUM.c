#include <stdio.h>
int main()
{
    int n,k=1;
    scanf("%d",&n);
    while(n--)
    {
        for(int i=k;i<=k+2;++i)
        {
            printf("%d ",i);
        }
        printf("PUM\n");
        k+=4;
    }
    return 0;
}