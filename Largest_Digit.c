#include<stdio.h>
int main()
{
    int n,largest=0,rem;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        if(largest<rem)
        {
            largest=rem;
        }
        n=n/10;
    }
    printf("%d",largest);
    return 0;
}