#include<stdio.h>
int main()
{
    int n,i,rem,arr[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    { c=0;
        if(arr[i]==0)
        {
            c++;
        }
        while(arr[i])
        {
            rem=arr[i]%10;
            arr[i]/=10;
            c++;
        }
        printf("%d ",c);
    }
    return 0;
}