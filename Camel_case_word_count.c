#include<stdio.h>
int main()
{
    int n,i,c=1;
    char str[100];
    scanf("%[^
]s",str);
    for(i=1;str[i]!=NULL;i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            c++;
        }
    }
    printf("%d",c);
}
