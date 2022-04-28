#include<stdio.h>
int main()
{
    int n,arr[100],i,k,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
        if(arr[i]==k)
        break;
    }
    printf("%d",sum);
    return 0;
}