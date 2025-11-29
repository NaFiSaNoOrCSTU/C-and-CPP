#include <stdio.h>
int main()
{
    int x,flag=0;
    scanf("%d",&x);
    for(int i=2;i<x;++i)
    {
        if(x%i==0)
        {
            flag++;
            break;
        }
    }
    if(flag==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}