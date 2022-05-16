#include<stdio.h>
int main()
{
    int a[100][100],sum=0,i,j,r,k,s=0;
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
            if(a[i][j]%2==0)   
            {
                s=s+a[i][j];
            }
            else
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("%d %d",s,sum);
}

