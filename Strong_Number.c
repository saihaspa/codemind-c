#include<stdio.h>
int main()
{
    int n,temp,rem,sum=0,fact=1,i;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {i=1,fact=1;
        rem=n%10;
        while(i<=rem)
        {
            fact=fact*i;
            i++;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    printf("The number %d is not a strong number",temp);
    return 0;
}