#include<stdio.h>
int main()
{
    int n,k,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i*i==n)
        {
            k=i*i;
        }
    }
    if(k==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}