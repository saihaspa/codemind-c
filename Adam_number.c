#include<stdio.h>
int main()
{
    int num,rem,rev=0,square,t,r,rv=0;
    scanf("%d",&num);
    square=num*num;
    
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    t=rev*rev;
    while(t)
    {
        r=t%10;
        rv=rv*10+r;
        t=t/10;
    }
    if(rv==square)
    {
        printf("True");
    }
    else
    printf("False");
    return 0;
}