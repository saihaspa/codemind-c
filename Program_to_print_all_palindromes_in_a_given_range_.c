#include<stdio.h>
int  palin(int i)
{
    int rev=0,rem,k;
    k=i;
    while(i)
    {
        rem=i%10;
        rev=rev*10+rem;
        i/=10;
    }
    if(k==rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int m,n,i;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(palin(i))
        {
            printf("%d ",i);
        }
        else
        {
            continue;
        }
    }
    
}