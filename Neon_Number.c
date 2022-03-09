#include<stdio.h>
int main()
{
    int n,k,rem,s=0;
    scanf("%d",&n);
    k=n*n;
    while(k>0)
    {
        rem=k%10;
        k=k/10;
        s=s+rem;
    }
    if(s==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
    return 0;
}