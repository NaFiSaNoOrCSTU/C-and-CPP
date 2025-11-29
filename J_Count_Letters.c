/*#include <stdio.h>
int main()
{
    char c;
    int count[26]={0};
    while(scanf("%c",&c) !=EOF)
    {
        count[c-'a']++;
    }
    for(char i='a';i<='z';++i)
    {
        if(count[i-'a']>0)
        {
            printf("%c : %d\n",i,count[i-'a']);
        }
    }
    return 0;
}*/
#include<stdio.h>
#include<string.h>
char a[10000001];
int main()
{
    scanf("%s",a);
    int cnt[26]={0};
    for(int i=0;i<strlen(a);i++)
    {
        cnt[a[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(cnt[i]!=0)
           printf("%c : %d\n",i+97,cnt[i]);
    }
}