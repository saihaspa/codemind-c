#include<stdio.h>
int main()
{
    int n,i,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
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