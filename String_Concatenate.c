#include <stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100],i;
    int l,j,temp;
    scanf("%s",s1);
    scanf("%s",s2);
    l=0;
    while(s1[l] != NULL)
    {
        ++l;
    }
    for(j=0;s2[j]!=NULL;++j,++l)
    {
        s1[l] = s2[j];
    }
    s1[l] = NULL;
    for(i=0;i<strlen(s1);i++)
       for(j=0;j<strlen(s1);j++)
         if(s1[i]<s1[j])
         {
           temp=s1[i];
           s1[i]=s1[j];
           s1[j]=temp;
         }
    puts(s1);

  return 0;
}