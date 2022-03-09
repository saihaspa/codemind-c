#include<stdio.h>
int main()
{
    int n,rem,prod=1,sum=0,res;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        prod=prod*rem;
        sum=sum+rem;
    }
    res=prod-sum;
    printf("%d",res);
    return 0;
}