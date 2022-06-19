#include<stdio.h>
int main()
{
    char str[200];
    int i,c,f,T,t;
    scanf("%[^
]s",str);
    scanf("%d",&T);
    scanf("%d",&t);
    for(i=T;i<=t;i++)
    {
        printf("%c",str[i]);
    }
}