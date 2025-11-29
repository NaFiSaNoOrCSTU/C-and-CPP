#include <stdio.h>
int main()
{
    int l1,r1,l2,r2;
    scanf("%d %d %d %d",&l1,&r1,&l2,&r2);
    if(l2>=l1 && r2<=r1)
    {

    }
    else
    {
        printf("-1\n");
    }
    return 0;
}#include<stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(b==0)
    {
        printf("-1\n");
    }
    else if(a==0 && b==0)
    {
        printf("-1\n");
    }
    else if(a==0)
    {
        printf("0\n");
    }
    else if(a>=b)
    {
        int rem=a%b;
        printf("%d\n",rem);
    }
    else if(a<b)
    {
        printf("-1\n");
    }

    return 0;
}