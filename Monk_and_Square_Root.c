#include<stdio.h>
int main()
{
    long long int t,m,n,ans,i;
    scanf("%lld",&t);
    while(t>0)
    {
        scanf("%lld%lld",&m,&n);
        ans=-1;
        for(i=0;i<=n;i++)
        {
            if((i*i)%n==m)
            {
                ans=i;
                break;
            }
        }
        printf("%lld
",ans);
        t--;
    }
}