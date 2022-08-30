#include<stdio.h>
void zeros(int *arr,int n)
{
    int count={0},i;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[count++]=arr[i];
        }
    }
    while(count<n)
    arr[count++]=arr[i];
}    

int main()
{
    int n,i,a[100],b[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    zeros(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}