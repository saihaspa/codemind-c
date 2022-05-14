#include<stdio.h>
int main()
{
    int n,i,rem,arr[100],c=0,dc=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {   c=0;
        while(arr[i]>0)
        {
            rem=arr[i]%10;
            arr[i]/=10;
            c++;
        }
        if(c%2==0)
        {
            dc++;
        }
    }
    printf("%d",dc);
}