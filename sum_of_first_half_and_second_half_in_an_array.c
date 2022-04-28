#include<stdio.h>
int main()
{
    int n,arr[100],i,sum=0,mid,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    mid=n/2;
    for(i=0;i<n/2;i++)
    {
        sum+=arr[i];
    }
    for(i=n/2;i<n;i++)
    {
        s+=arr[i];
    }
    printf("%d
%d",sum,s);
    return 0;
}