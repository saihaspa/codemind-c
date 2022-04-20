#include<stdio.h>
int main()
{
    int n,k,l,sum=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {sum=0;
        scanf("%d%d",&k,&l);
        sum=sum+k+l;
        printf("%d
",sum);
    }
    return 0;
}