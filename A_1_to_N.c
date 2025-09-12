/*#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        printf("%d",i);
        printf("\n");
    }
    return 0;
}*/
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        printf("Case #%d\n",t);
        int n,k;
        struct stdnt
        {
            int roll;
            char name[110];
            int room;
            char gender[10];
        };
        scanf("%d %d",&n,&k);
        struct stdnt std[k];
        int i,j;
        for(i=0;i<k;++i)
        {
            scanf("%d",&std[i].roll);
            scanf("%s",&std[i].name);
            scanf("%d",&std[i].room);
            scanf("%s",&std[i].gender);
        }
        for(i=0;i<k-1;++i)
        {
            for(j=i+1;j<k;++j)
            {
                if(std[i].roll>std[j].roll)
                {
                    int temp=std[i].roll;
                    std[i].roll=std[j].roll;
                    std[j].roll=temp;
                    
                    char ch[110];
                    strcpy(ch,std[i].name);
                    strcpy(std[i].name,std[j].name);
                    strcpy(std[j].name,ch);
                    
                    int temp1=std[i].room;
                    std[i].room=std[j].room;
                    std[j].room=temp1;
                    
                    char ch1[10];
                    strcpy(ch1,std[i].gender);
                    strcpy(std[i].gender,std[j].gender);
                    strcpy(std[j].gender,ch1);
                }
            }
        }
        int q;
        scanf("%d",&q);
        while(q--)
        {
            printf("Query #%d\n",q);
            int num;
            scanf("%d",&num);
            int flag=0;
            for(i=0;i<k;++i)
            {
                if(std[i].room==num)
                {
                    printf("%d %s %s\n",std[i].roll,std[i].name,std[i].gender);
                    flag++;
                }
            }
            if(flag==0)
            {
                printf("No Student\n");
            }
        }
    }

    return 0;
}

