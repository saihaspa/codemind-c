#include<stdio.h>
int main()
{
    int n,r,i,j,a[100][100],s=0,max=0;
    scanf("%d%d",&n,&r);
    for(i=0;i<n;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<r;j++)
    {s=0;
        for(i=0;i<n;i++)
        {
            s=s+a[i][j];
        }
        if(max<s)
        {
            max=s;
        }
    }
    printf("%d",max);
    return 0;
}