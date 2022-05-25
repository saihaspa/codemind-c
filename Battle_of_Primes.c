#include<stdio.h>
int prime(int s)
{
    int i;
    for(i=2;i<s;i++)
    {
        if(s%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int fun(int s)
{
    int i,l,s2;
    for(i=1;i<=20;i++)
    {
        s2=s+i;
        if(prime(s2))
        {
            l=i;
            break;
        }
    }
    return l;
}
int main()
{
    int a,b,s=0,k;
    scanf("%d%d",&a,&b);
    s=a+b;
    k=fun(s);
    printf("%d",k);
}
