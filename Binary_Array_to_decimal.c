#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,s=0,arr[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        c=n-i-1;
        while(arr[i])
        {
            s=s+(pow(2,c))*(arr[i]);
            arr[i]=arr[i]/10;
        }
    }
    printf("%d",s);
}