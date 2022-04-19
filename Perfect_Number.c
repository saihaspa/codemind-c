#include<stdio.h>
int main()
{
    int num,i,sum=0,temp;
    scanf("%d",&num);
    temp=num;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==temp)
    printf("True");
    else
    printf("False");
    return 0;
}