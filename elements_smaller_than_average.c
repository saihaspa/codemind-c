#include<stdio.h>
int main()
{
    int n,arr[100],i,count=0,avg,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]<=avg)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}