#include<stdio.h>
int main()
{
    int n,a[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2==0)
    {
        for(i=0;i<n/2;i++)
        {
            printf("%d %d ",a[i],a[n-i-1]);
        }
    }
    if(n%2!=0)
    {
        for(i=0;i<n/2;i++)
        {
            printf("%d %d ",a[i],a[n-i-1]);
        }
        printf("%d ",a[(n/2)]);
        printf("0");
    }
}