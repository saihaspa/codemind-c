#include<stdio.h>
int main()
{
    char str[200];
    int i,T,t,c;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%s",str);
        c=0;
        for(i=0;str[i]!=NULL;i++)
        {
            if(str[i]>='0' && str[i]<='9')
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("No
");
        }
        else
        {
            printf("Yes
");
        }
    }
}