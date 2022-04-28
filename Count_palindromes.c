#include<stdio.h>
int main()
{
    int n,rem,rev=0,arr[100],i,temp,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {rev=0;temp=arr[i];
        while(arr[i]>0)
        {
            rem=arr[i]%10;
            rev=rev*10+rem;
            arr[i]/=10;
        }
        if(rev==temp)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}