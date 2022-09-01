#include<stdio.h>
int main()
{
    int a[100],max=0,i,t,n,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        max=0;
        for(j=i+1;j<n;j++)
        {
            if(a[j]>max)
            {
                max=a[j];
            }
        }
        a[i]=max;
    }
    
    for(i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("-1");
}