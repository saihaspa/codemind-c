#include<stdio.h>
int main()
{
    int min,i,n,r,hcf=1,lcm;
    scanf("%d%d",&n,&r);
    min=n>r?r:n;
    for(i=1;i<=min;i++)
    {
        if(n%i==0 && r%i==0)
        {
            hcf=i;
        }
    }
    lcm=(n*r)/hcf;
    printf("%d",lcm);
    return 0;
}