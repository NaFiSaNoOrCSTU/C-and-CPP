#include <stdio.h>
int main()
{
    int n,n1;
    scanf("%d",&n);
    n1=n%10;
    n=n/10;
    if(n1%n==0 || n%n1==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}