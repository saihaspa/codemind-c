#include<stdio.h>
int main()
{
    char str[100];
    int c=1,i;
    scanf("%[^
]s",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c);
}