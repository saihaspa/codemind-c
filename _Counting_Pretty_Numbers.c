#include<stdio.h>
int main()
{
    int n,m,c=0,l,rem,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&m,&l);
        c=0;
        for(j=m;j<=l;j++)
        {
            while(j)
            {
                rem=j%10;
                break;
            }
            if(rem==2 || rem==3 || rem==9)
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}