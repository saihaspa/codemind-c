#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int i=0,c=0;
    for(int i=0;i<strlen(s);i++)
    {
        c=0;
        for(int j=0;j<strlen(s);j++)
        {
            if(s[i]==s[j]){
                c++;
            }
        }
        if(c==1){
            printf("%d",i);
            break;
        }
    }
    if(c!=1){
        printf("-1");
    }
}