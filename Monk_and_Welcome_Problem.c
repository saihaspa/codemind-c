#include<stdio.h>
int main()
{
    int n,i,arr[100],b[100],j,c[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(i==j)
            {
                c[i]=arr[i]+b[i];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",c[i]);
    }
}