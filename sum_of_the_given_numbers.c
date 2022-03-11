#include<stdio.h>
int main()
{
    int n,i,r,c,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&x,&r);
        c=x+r;
        printf("%d
",c);
    }
    return 0;
}