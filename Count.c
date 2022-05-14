#include<stdio.h>
int main()
{
    int n,arr[100],b[100],i,j,c=0,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            c++;
        }
        else
        {
            cnt++;
        }
    }
    printf("%d %d",cnt,c);
}