/*#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    //selection sorting
    for(int i=0;i<n-1;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    //count array
    int size=a[0]+1;
    int count[100001]={0};
    for(int i=0;i<n;++i)
    {
        int val=a[i];
        count[val]++;
    }
    if(count[a[0]]%2==0)
    {
        printf("Unlucky\n");
    }
    else
    {
        printf("Lucky\n");
    }
    return 0;
}*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    int min=a[0];
    int counter=0;
    for(int i=0;i<n;++i)
    {
        if(min==a[i])
        {
            counter++;
        }
        else if(min>a[i])
        {
            min=a[i];
            counter=1;
        }
    }
    if(counter%2==0)
    {
        printf("Unlucky\n");
    }
    else
    {
        printf("Lucky\n");
    }
    return 0;
}