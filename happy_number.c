#include<stdio.h>
int main()
{
    int num,sum=0,d;
    scanf("%d",&num);
    while(num!=1 && num!=4)
    {sum=0;
        while(num>0)
        {
            d=num%10;
            sum+=d*d;
            num=num/10;
        }
        num=sum;
    }
    if(num==1 || num==7)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}