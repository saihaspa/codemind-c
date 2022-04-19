#include<stdio.h>
int main()
{
    int rem,l=0,k=0,num,c=0,temp;
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        c++;
    }
    num=temp;
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        if(rem%2==0)
        k++;
        else
        l++;
    }
    if(k==c)
    printf("Even");
    else if(l==c)
    printf("Odd");
    else
    printf("Mixed");
    return 0;
    
}