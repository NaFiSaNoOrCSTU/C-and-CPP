/*#include <stdio.h>
int main()
{
    char x[21],y[21];
    scanf("%s %s",x,y);
    int i=0;
    while(1)
    {
        if(x[i]=='\0' && y[i]=='\0')
        {
            printf("%s\n",x);
            break;
        }
        else if(x[i]=='\0')
        {
            printf("%s\n",x);
            break;
        }
        else if(y[i]=='\0')
        {
            printf("%s\n",y);
        }
        if(x[i]==y[i])
        {
            ++i;
        }
        else if(x[i]<y[i])
        {
            printf("%s\n",x);
            break;
        }
        else
        {
            printf("%s\n",y);
            break;
        }
    }
    return 0;
}*/
#include <stdio.h>
int main()
{
    char x[21],y[21];
    scanf("%s %s",x,y);
    int val=strcmp(x,y);
    if(val==0)
    {
        printf("%s\n",x);
    }
    else if(val<0)
    {
        printf("%s\n",x);
    }
    else
    {
        printf("%s\n",y);
    }
    return 0;
}