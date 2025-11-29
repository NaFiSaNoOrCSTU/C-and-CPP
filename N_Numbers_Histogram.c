#include <stdio.h>
int main()
{
    int n,x;
    char s;
    scanf("%c %d",&s,&n);
    for(int i=0;i<n;++i)
    {
        scanf("%d",&x);
        for(int j=0;j<x;++j)
        {
            printf("%c",s);
        }
        printf("\n");
    }
    return 0;
}