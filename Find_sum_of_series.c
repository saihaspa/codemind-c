#include<stdio.h>
int main()
{
    int d=1,n,t,a=1;
    float ap=0;
    scanf("%d",&t);
    for(n=1;n<=t;n++)
    {
        ap=ap+(1.0/(a+(n-1)*d));
    }
    printf("%.2f",ap);
    return 0;
}