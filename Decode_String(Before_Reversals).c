#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,i,j;
        scanf("%d%d",&a,&b);
        char str[a],res[100];
        scanf("%s",str);
        while(b>0)
        {
            char res[b];
            for(i=0;i<b;i++)
            {
                res[i]=str[i];
            }
            for(i=0;i<b;i++)
            {
                str[i]=res[b-i-1];
            }
            b--;
        }
        printf("%s
",str);
    }
}