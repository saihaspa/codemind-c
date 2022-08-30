#include<stdio.h>
int main()
{
    int n,k,t,i,j,a[100],b[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        for(j=i;j<i+1;j++)
        {
            if(a[i]<=k and b[j]>=k)
            {
                c+=1;
            }
            else
            {
                continue;
            }
        }
    }
    if(c>0)
    {
        printf("%d",c);
    }
    else
    printf("0");
}