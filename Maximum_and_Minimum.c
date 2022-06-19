#include<stdio.h>
int main()
{
    int n,a[100],i,c=0,k,j,s=0,max=a[0],min=999;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {c=1;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j && a[i]>=0)
            {
                c++;
                a[j]=-1;
            }
        }
        if(c==a[i])
        {
            s++;
            if(min>a[i])
            {
                min=a[i];
            }
            if(max<a[i])
            {
                max=a[i];
            }
        }
    }
    if(s==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d %d",min,max);
    }
}