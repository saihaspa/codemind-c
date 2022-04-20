#include<stdio.h>
int main()
{
    int n,temp,rem,sum=0;
    scanf("%d",&n);
    while(n!=1 && n!=4)
    {sum=0;
        while(n>0)
        {  
           rem=n%10;
           sum=sum+rem*rem;
           n=n/10;
        }
        n=sum;
    }
    if(sum==1 || sum==7)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
    
}