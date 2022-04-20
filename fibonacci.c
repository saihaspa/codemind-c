#include<stdio.h>
int main()
{
    int a,b,c,num,temp,i;
    scanf("%d",&num);
    a=0;b=1;
    printf("%d %d ",a,b);
    for(i=0;i<num-2;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        
    }
    return 0;
}