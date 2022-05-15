#include<stdio.h>
int main()
{
    int n,i,j,fc=0,arr[100],k,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=k)
        {
            fc=0;
            for(j=1;j<=arr[i];j++)
            {
                if(arr[i]%j==0)
                
                {
                    fc++;
                }
            }
            if(fc==2)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}