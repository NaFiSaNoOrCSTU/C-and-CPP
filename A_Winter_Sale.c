#include <stdio.h>
int main()
{
    float dis,price;
    scanf("%f %f",&dis,&price);
    float main=(100*price)/(100-dis);
    printf("%.2f\n",main);
    return 0;
}