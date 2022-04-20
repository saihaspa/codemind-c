#include<stdio.h>
int main()
{
    int n,rem,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    if(temp%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}