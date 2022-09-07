#include<stdio.h>
int main()
{
    int r,c,i,j,s=0,arr[1000][1000],t=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<c;j++)
    {
        for(i=0;i<r-1;i++)
        {
            if(arr[i][j]>arr[i+1][j])
            break;
        }
        if(i==r-1 and i<r)
        {
             s++;
        }
    }
    for(j=0;j<c;j++)
    {
        for(i=r-1;i>0;i--)
        {
            if(arr[i][j]>arr[i-1][j])
            break;
        }
        if(i==0)
        {   
             t++;
        }
    }
    printf("%d",s+t);
    
}