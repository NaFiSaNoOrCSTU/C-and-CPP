#include <stdio.h>

int main() {
int n;
    scanf("%d",&n);
    int s=n-1,h=1,m=3,s1=1,h1=2*n-3,m1=2*n-5,m2=2*n-3,h2=2*n-5;
    for(int i=1;i<=2*n-1;++i)
    {
        if(i<=n)
        {
            for(int j=1;j<=s;++j)
            {
                printf(" ");
            }
            --s;
            if(i%2==1)
            {
                for(int j=1;j<=h;++j)
                {
                printf("#");
                }
                h+=4;
                printf("\n");
            }
            if(i%2==0)
            {
                for(int j=1;j<=m;++j)
                {
                    printf("-");
                }
                m+=4;
                printf("\n");
            }
        }
        else
        {
            for(int j=1;j<=s1;++j)
            {
                printf(" ");
            }
            s1++;
            if(n%2==0)
            {
                if(i%2==1){
                for(int j=1;j<=h1;++j)
                {
                    printf("#");
                }
                h1-=4;
                printf("\n");
                }
                if(i%2==0){
                for(int j=1;j<=m1;++j)
                {
                    printf("-");
                }
                m1-=4;
                printf("\n");
                }
            }
            else if(n%2==1)
            {
                if(i%2==0){
                for(int j=1;j<=m2;++j)
                {
                    printf("-");
                }
                m2-=4;
                printf("\n");
                }
               if(i%2==1){
                for(int j=1;j<=h2;++j)
                {
                    printf("#");
                }
                h2-=4;
                printf("\n");
               }
            }
        }
    }
    return 0;
}
