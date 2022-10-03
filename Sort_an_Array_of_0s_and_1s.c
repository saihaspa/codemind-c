#include<stdio.h>
int main()
{
    int n,i,a[100],t,d=0,c=0,b[100],j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            b[j++]=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            b[j++]=a[i];
        }
    }
    for(j=0;j<n;j++)
    {
        printf("%d ",b[j]);
    }
}