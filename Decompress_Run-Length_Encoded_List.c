#include<stdio.h>
int main()
{
    int a[100],b[100],d[100],i,j=0,k=0,t,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            b[j++]=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            d[k++]=a[i];
        }
    }
    for(j=0;j<n;j++)
    {
        t=b[j];
        while(t>0)
        {
            printf("%d ",d[j]);
            t--;
        }
    }
}