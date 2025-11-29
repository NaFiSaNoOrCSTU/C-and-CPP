#include <stdio.h>
int main()
{
    char f1[100],s1[100],f2[100],s2[100];
    fflush(stdin);
    fgets(f1,100,stdin);
    fgets(s1,100,stdin);
    fgets(f2,100,stdin);
    fgets(s2,100,stdin);
    if(s1==s2)
    {
        printf("ARE Brothers\n");
    }
    else
    {
        printf("NOT\n");
    }
    return 0;
}