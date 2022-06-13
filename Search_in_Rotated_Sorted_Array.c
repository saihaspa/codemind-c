#include<stdio.h>
int main()
{
    int n,i,a[100],t,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(a[i]==t)
        {
            c++;
            printf("%d",i);
            break;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}