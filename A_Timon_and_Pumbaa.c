#include <stdio.h>
int main()
{
    int a,b,min;
    scanf("%d %d",&a,&b);
    min=a-b;
    if(min>=0)
    {
        printf("%d\n",min);
    }
    else
    {
        printf("0\n");
    }
    return 0;
}