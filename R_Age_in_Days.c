#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int yr=n/365;
    n=n%365;
    int mon=n/30;
    n=n%30;
    int day=n;
    printf("%d years\n%d months\n%d days\n",yr,mon,day);
    return 0;
}