#include<stdio.h>
int main()
{
    int n,rem,rev=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        rev=rev*10+rem;
    }
    printf("%d",rev);
    return 0;
}