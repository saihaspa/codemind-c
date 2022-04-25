#include<stdio.h>
int main()
{
    int n,arr[100],count=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n-1;i++)
    {
        if(arr[i]%2==0 && arr[i-1]%2==0 && arr[i+1]%2==0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}