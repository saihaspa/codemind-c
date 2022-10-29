#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char l[27]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char a[10];
    int rem=0,i=0,k=0;
    while(n!=0)
    {
        rem=n%26;
        if(rem==0)
        {
            a[i++]=l[25];
            n=n/26-1;
            k++;
        }
        else
        {
            a[i++]=l[rem-1];
            n=n/26;
            k++;
        }
    }
    for(i=k-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
}