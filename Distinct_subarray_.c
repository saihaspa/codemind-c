#include<stdio.h>
int main()
{
    int m,n,i,j,d=0,c=0;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=m;i<=n;i++)
    {
        c=0;
        for(j=i;j<=n;j++)
        {
            c+=j;
            if(c%2!=0)
            {
                d++;
            }
        }
    }
    printf("%d",d);
}