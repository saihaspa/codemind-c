#include<stdio.h>
int main()
{
    int n,i,a[100],j,c=0,cnt=0,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {c=1;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                c++;
                a[j]=-1;
            }
        }
        if(c==a[i])
        {
            cnt++;
        }
    }
    t=cnt;
    printf("%d",t);
}