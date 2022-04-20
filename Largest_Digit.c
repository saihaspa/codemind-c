#include<stdio.h>
int main()
{
    int rem,num,large=0;
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        if(large<rem)
        {
            large=rem;
        }
        num=num/10;
    }
    printf("%d",large);
    return 0;
}