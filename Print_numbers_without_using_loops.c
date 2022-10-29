#include<stdio.h>
void num(int n,int i)
{
    if(i<=n)
    {
        printf("%d ",i);
        num(n,i+1);
    }
}
int main()
{
    int n,i=1;
    scanf("%d",&n);
    if(n<=0 || n>10000)
    printf("The Number Series is Not Possible Print");
    else
    num(n,i);
    return 0;
}