#include<stdio.h>
int main()
{
    int a[100][100],i,j,r,k,x,y,s=0,sum=0;
    scanf("%d%d",&r,&k);
    for(i=0;i<r;i++)
    {
        for(j=0;j<k;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<k;j++)
        {
            if(i==j)
            {
                s=s+a[i][j];
            }
        }
    }
    for(i=0;i<r;i++)
    {
        if(i==r-i-1)
        {
            continue;
        }
        else
        {
            sum=sum+a[i][r-i-1];
        }
        
    }
    x=s+sum;
    printf("%d",x);
}

