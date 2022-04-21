#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,arr[100],sum=0,s=0,diff;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            sum+=arr[i];
        }
        else
        s+=arr[i];
    }
    diff=sum-s;
    printf("%d",abs(diff));
    return 0;
}