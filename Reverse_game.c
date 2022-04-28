#include<stdio.h>
int main()
{
    int n,rem,rev=0,arr[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {rev=0;
        while(arr[i]>0)
        {
            rem=arr[i]%10;
            rev=rev*10+rem;
            arr[i]/=10;
        }
        printf("%d ",rev);
    }
    return 0;
}