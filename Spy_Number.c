#include<stdio.h>
int main()
{
    int num,rem,sum=0,prod=1,temp;
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        sum+=rem;
        prod*=rem;
        num=num/10;
    }
    if(prod==sum)
    {
        printf("Spy Number");
    }
    else
    printf("Not Spy Number");
    return 0;
}