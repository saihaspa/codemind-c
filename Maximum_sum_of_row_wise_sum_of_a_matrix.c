#include<stdio.h>
int main()
{
    int n,r,i,j,max,c[100],a[100][100],s=0;
    scanf("%d%d",&n,&r);
    for(i=0;i<n;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<n;i++)
    {  s=0;
        for(j=0;j<r;j++)
        {
            s=s+a[i][j];
        }
        c[i]=s;
    }
    max=c[0];
    for(i=0;i<n;i++)
    {
        if(max<=c[i])
        {
            max=c[i];
        }
    }
    printf("%d",max);
    return 0;
}
