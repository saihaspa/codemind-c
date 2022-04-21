#include<stdio.h>
int main()
{
    int n,avg,arr[100],i,sum=0,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
       if(avg==arr[i])
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