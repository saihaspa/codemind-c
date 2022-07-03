#include<stdio.h>
int main()
{
    int n,i,arr[100],m,k,c=0,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&m,&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]<m || arr[i]>k)
        {
            c++;
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }
        else
        {
            continue;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",max);
    }
}