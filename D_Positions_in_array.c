#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int ar[N];
    for(int i=0;i<N;++i)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<N;++i)
    {
        if(ar[i]<=10)
        {
            printf("A[%d] = %d\n",i,ar[i]);
        }
    }
    return 0;
}