#include<stdio.h>
int main()
{
    int n,i,a[100],pr,j,b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        pr=1;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                continue;
            }
            else
            {
                pr=pr*a[j];
            }
        }
        b[i]=pr;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}