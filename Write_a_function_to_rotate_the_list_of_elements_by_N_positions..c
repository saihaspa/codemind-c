/*t=int(input())
for i in range(t):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    while k:
        j=a[n-1]
        for i in range(n-2,-1,-1):
            a[i+1]=a[i]
        a[0]=j
        k-=1
    for i in range(0,n):
        if(i!=n-1):
            print(a[i],end=' ')
        else:
            print(a[i])
*/
#include<stdio.h>
int main()
{
    int n,k,i,j,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        while(k!=0)
        {
            j=a[n-1];
            for(i=n-2;i>=0;i--)
            {
                a[i+1]=a[i];
            }
            a[0]=j;
            k--;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
