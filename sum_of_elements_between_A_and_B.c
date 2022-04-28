#include<stdio.h>
int main()
{
    int n,i,arr[100],sum=0,m,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&m,&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=m && arr[i]<=k)
        {
            sum+=arr[i];
        }
        else
        {
            continue;
        }
    }
    printf("%d",sum);
    return 0;
}