#include<stdio.h>
int square(int t)
{
    int i;
    for(i=1;i<=t;i++)
    {
        if(i*i==t)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n,a[100],s=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(square(a[i]))
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}