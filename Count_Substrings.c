#include<stdio.h>
int main()
{
    int t,n,s,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,c=0,d=0,i,j,k;
        scanf("%d",&n);
        char s[100];
        scanf("%s",s);
        for(j=0;s[j]!=NULL;j++)
        {
            if(s[j]=='1')
            c++;
        }
        for(j=0;s[j]!=NULL;j++)
        {
            d=0;
            if(s[j]=='1')
            {
                for(k=j+1;s[k]!=NULL;k++)
                {
                    if(s[k]=='1')
                    d++;
                }
            }
            c=c+d;
        }
        printf("%d
",c);
    }
}