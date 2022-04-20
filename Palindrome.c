#include<stdio.h>
int main()
{
    int num,rev=0,rem,temp;
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(rev==temp)
    {
        printf("True");
    }
    else
    printf("False");
    return 0;
}