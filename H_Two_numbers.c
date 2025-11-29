#include <stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    float div=(float)a/(float)b;
    int num1=floor(div);
    int num2=ceil(div);
    int num3=round(div);
    printf("floor %d / %d = %d\n",a,b,num1);
    printf("ceil %d / %d = %d\n",a,b,num2);
    printf("round %d / %d = %d\n",a,b,num3);
    return 0;
}