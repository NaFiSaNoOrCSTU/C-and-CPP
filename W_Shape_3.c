#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1,k=1,s1=0,k1=2*n-1;
    for(int i=1;i<=2*n;++i)
    {
        if(i<=n)
        {
            for(int j=1;j<=s;++j)
            {
                printf(" ");
            }
            --s;
            for(int j=1;j<=k;++j)
            {
                printf("*");
            }
            k+=2;
            printf("\n");
        }
        else
        {
            for(int j=1;j<=s1;++j)
            {
                printf(" ");
            }
            ++s1;
            for(int j=1;j<=k1;++j)
            {
                printf("*");
            }
            k1-=2;
            printf("\n");
        }
    }
    return 0;
}