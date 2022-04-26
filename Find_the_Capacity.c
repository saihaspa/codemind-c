#include<stdio.h>
int main()
{
    int t,s,b,kb,capacity,C;
    scanf("%d%d%d",&t,&s,&b);
    capacity=2*t*s*b*(512);
    C=capacity/1024;
    printf("%dKB",C);
    return 0;
}