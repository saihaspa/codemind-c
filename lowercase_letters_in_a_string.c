#include<stdio.h>
int main()
{
    char str[100],i;
    int l=0,u=0,whitesp=0,n=0,sp=0;
    scanf("%[^
]s",str);
    for(i=0;i<str[i]!=NULL;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        u++;
        else if(str[i]>='a' && str[i]<='z')
        l++;
        else if(str[i]>='0' && str[i]<='9')
        n++;
        else if(str[i]==' ')
        whitesp++;
        else
        sp++;
    }
    printf("%d",l);
}