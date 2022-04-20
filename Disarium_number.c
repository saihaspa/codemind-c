#include<stdio.h>
#include<math.h>
int main()
{
    int num,rem,rev=0,sum=0,d,temp,cnt=0;
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    while(rev)
    {
        cnt++;
        d=rev%10;
        sum+=pow(d,cnt);
        rev=rev/10;
    }
    if(sum==temp)
    {
        printf("True");
    }
    else
    printf("False");
    return 0;
}