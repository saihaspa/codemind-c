#include<stdio.h>
int main()
{
    int n,i,j,a[100],k,b[100],l=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {k=0;
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(a[i]==a[j])
            {
                k=1;
                break;
            }
        }
        if(k==0)
        {
            b[l++]=a[i];
            c+=1;
        }
        
    }
    for(i=0;i<l;i++)
    {
        printf("%d ",b[i]);
    }
    if(c==0)
    {
        printf("-1");
    }
}