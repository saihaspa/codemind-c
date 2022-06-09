#include<stdio.h>
int main()
{
    char str[100];
    int c=0,v=0,w=0,d=0,i;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i'|| str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            
            v++;
        }
        else if(str[i]==' ')
        {
            w++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            d++;
        }
        else
        {
            c++;
        }
    }
    printf("Vowels: %d
",v);
    printf("Consonants: %d
",c);
    printf("Digits: %d
",d);
    printf("White spaces: %d",w);
}