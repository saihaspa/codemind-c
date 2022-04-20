#include<stdio.h>
int main()
{
    int n,m,i,hcf=1,min;
    scanf("%d%d",&n,&m);
    min=m>n?n:m;
    for(i=1;i<=min;i++)
    {
        if(n%i==0 && m%i==0)
        {
            hcf=i;
        }
    }
    printf("%d",hcf);
    return 0;
}