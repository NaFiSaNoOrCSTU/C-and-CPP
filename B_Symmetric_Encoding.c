#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int size;
        scanf("%d",&size);
        char s[size+1];
        scanf("%s",s);
        int i=0,j=size-1;
        while(i<j)
        {
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            ++i;
            --j;
        }
        s[size]='\0';
        /*int k=0;
        while(s[k]!='\0')
        {
            printf("%c",s[k]);
            ++k;
        }
        printf("\n");*/
        puts(s);
    }
    return 0;
}