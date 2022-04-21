#include<stdio.h>
int main()
{
    int arr[100],n,i,sum=0,s=0,diff;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum=sum+arr[i];
        }
        else
        {
            s=s+arr[i];
        }
    }
    diff=sum-s;
    printf("%d",diff);
    return 0;
}