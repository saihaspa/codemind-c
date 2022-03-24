#include<stdio.h>
int main()
{
    int a[100][100],i,j,sum=0,r,c,k;
    scanf("%d
",&r);
    scanf("%d
",&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d
",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum=sum+a[i][j];
        }
    }
    k=sum;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",k);
            return 0;
        }
    }
    return 0;
}