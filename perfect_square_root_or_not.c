#include<stdio.h>
int main()
{
    int n,k,i,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i*i==n)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    printf("False");
    return 0;
}