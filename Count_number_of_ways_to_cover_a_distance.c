#include<stdio.h>
int ways(int n)
{
    int c=0;
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    return ways(n-1)+ways(n-2)+ways(n-3);
}
int main()
{
    int n,c=0;
    scanf("%d",&n);
    printf("%d",ways(n));
}

