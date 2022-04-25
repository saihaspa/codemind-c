#include<stdio.h>
int main()
{
    long long int n,i,rem,d;
    scanf("%lld",&n);
    d=n%10;
    if(d==0)
    {
        printf("%lld",n/10);
        //return 0;
    }
    else if(d<0)
    {
        d=n/10;
        printf("%lld",d-1);
    }
    else
    {
        d=n/10;
        printf("%lld",d);
    }
    return 0;
}