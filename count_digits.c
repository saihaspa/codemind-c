#include<stdio.h>
int main()
{
    int n,i,a[100],c=0,rem;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        if(a[i]==0)
        {
            c++;
        }
        while(a[i])
        {
            rem=a[i]%10;
            c++;
            a[i]/=10;
        }
        printf("%d ",c);
    }
}