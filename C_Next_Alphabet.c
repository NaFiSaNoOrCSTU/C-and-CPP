#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        if(ch>='a' && ch<='y')
        {
            printf("%c\n",ch+1);
        }
        else
        {
            printf("a\n");
        }
    }
    return 0;
}