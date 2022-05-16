#include<stdio.h>
int main()
{
    int n,k,i,rem,arr[100],cnt=0,c=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    { c=0;
        if(arr[i]==0)
        {
            c++;
        }
        while(arr[i])
        {
            rem=arr[i]%10;
            arr[i]/=10;
            c++;
        }
        if(c==k)
        {
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}