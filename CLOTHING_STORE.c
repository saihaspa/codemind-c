#include<stdio.h>
int main()
{
    int t=0,i,j,a[100],c=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {c=0;
         for(j=i+1;j<n;j++)
         {
             if(a[i]==a[j])
             {
                 c++;
             }
         }
         t=t+c%2;
    }
    printf("%d",t);
}