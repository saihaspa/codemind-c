#include<stdio.h>
int main()
{
    int n,a[100],i,c=0,k,j,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {c=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                c++;
            }
        }
        if(c==0)
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}