#include<stdio.h>
int palin(int i)
{
    int rem,r=0,temp;
    temp=i;
    while(i!=0)
    {
        rem=i%10;
        r=r*10+rem;
        i/=10;
    }
    if(r==temp)
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
    int n,i,j,k,t;
    scanf("%d",&n);
    for(i=n-1;i>=0;i--)
    {
        if(palin(i))
        {
            k=i;
            break;
        }
    }
    for(j=n+1;j<1000;j++)
    {
        if(palin(j))
        {
            t=j;
            break;
        }
    }
    if((t-n)==(n-k))
    {
        printf("%d %d",k,t);
    }
    else
    {
        printf("%d",k);
    }
}