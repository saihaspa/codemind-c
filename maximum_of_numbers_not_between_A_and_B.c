#include<stdio.h>
int main()
{
    int i,n,ar[100],a,b,max=-999999,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(ar[i]<a || ar[i]>b)
        {
            if(ar[i]>max)
            {
                max=ar[i];
                d++;
            }
        }
    }
    if(d>0)
    {
        printf("%d",max);
    }
    if(d==0)
    {
        printf("-1");
    }
    return 0;
}