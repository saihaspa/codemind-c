#include<stdio.h>
int main()
{
    long int n,arr[100],i,s=0;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
        s=s+arr[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%ld",s);
        return 0;
    }
    return 0;
}