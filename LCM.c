#include<stdio.h>
int main()
{
    int n,i,m,hcf=1,lcm,min,k;
    scanf("%d%d",&n,&m);
    min=m>n?n:m;
    for(i=1;i<=min;i++)
    {
        if(m%i==0 && n%i==0)
        {
            hcf=i;
        }
    }
    k=hcf;
    lcm=(n*m)/k;
    printf("%d",lcm);
    return 0;
}