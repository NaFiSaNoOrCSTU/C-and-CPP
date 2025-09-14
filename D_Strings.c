#include <stdio.h>
#include<string.h>
int main()
{
    char a[11],b[11],temp[11];
    scanf("%s %s",a,b);
    strcpy(temp,a);
    int len=strlen(a);
    int len1=strlen(b);
    printf("%d %d\n",len,len1);
    strcat(temp,b);
    printf("%s\n",temp);
    char temp1=a[0];
    a[0]=b[0];
    b[0]=temp1;
    printf("%s %s\n",a,b);
    return 0;
}