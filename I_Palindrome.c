/*#include <stdio.h>
#include<string.h>
int main()
{
    char s[1001],temp[1001];
    scanf("%s",s);
    strcpy(temp,s);
    int len=strlen(s);
    int i=0,j=len-1;
    while(i<j)
    {
        s[i]=s[j];
        ++i;
        --j;
    }
    int val=strcmp(temp,s);
    if(val==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}*/
#include <stdio.h>
int main()
{
    int n,rem,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    if(sum==n)
    {
        printf("%d\n",sum);
        printf("YES\n");
    }
    else
    {
        printf("%d\n",sum);
        printf("NO\n");
    }
    return 0;
}