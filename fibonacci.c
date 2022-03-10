#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,cnt=2,c;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=0;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);
        cnt++;
        a=b;
        b=c;
        if(cnt==n)
        break;
    }
    return 0;
}