#include<stdio.h>
int main()
{
    int n,i,arr[100],sum=0,rem;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        while(arr[i]>0)
        {
            rem=arr[i]%10;
            sum+=rem;
            arr[i]=arr[i]/10;
        }
    }
    printf("%d",sum);
    return 0;
}