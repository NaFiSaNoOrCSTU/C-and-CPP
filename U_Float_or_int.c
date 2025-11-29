#include <stdio.h>
int main()
{
    float n;
    scanf("%f",&n);
    int num=n;
    float rest=n-num;
    if(rest!=0)
    {
        printf("float %d %.3f\n",num,rest);
    }
    else
    {
        printf("int %d\n",num);
    }
    return 0;
}