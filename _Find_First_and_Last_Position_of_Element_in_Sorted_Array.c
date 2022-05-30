#include<stdio.h>
void findFandL(int n,int *arr,int k)
{
    int f=-1,l=-1,i;
    for(i=0;i<n;i++)
    {
        if(k!=arr[i])
        {
            continue;
        }
        if(f==-1)
        {
            f=i;
        }
        l=i;
    }
    if(f!=-1)
    {
        printf("%d %d",f,l);
    }
    else
    {
        printf("-1 -1");
    }
    
}
int main()
{
    int n,i,arr[100],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    findFandL(n,arr,k);
}
     
  