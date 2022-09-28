/*def balanced_string_split(s):
    e=0
    ares=0
    max=0
    for char in s:
        if char=='L':
            e+=1
        else:
            ares+=1
        if e==ares:
            max+=1
            e=0
            ares= 0
    return max
s=input()
print(balanced_string_split(s))*/

#include<stdio.h>
int main()
{
    int ares=0,max=0,e=0,i;
    char str[100];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='L')
        {
            e++;
        }
        else
        {
            ares++;
        }
        if(e==ares)
        {
            max++;
            e=0;
            ares=0;
        }
    }
    printf("%d",max);
    
}