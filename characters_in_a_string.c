#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int l;
    scanf("%[^
]s",str);
    l=strlen(str);
    printf("%d",l);
    return 0;
}