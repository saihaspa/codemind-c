/*n = int(input())
for i in range(n,0,-1):
    for j in range(n,i,-1):
        print(j,end=" ")
    for j in range(1,i*2):
        print(i,end=" ")
    for j in range(i+1,n+1):
        print(j,end=" ")
    print("")
for i in range(1,n):
    for j in range(n,i,-1):
        print(j,end=" ")
    for j in range(1,i*2):
        print(i+1,end=" ")
    for j in range(i+1,n+1):
        print(j,end=" ")
    print("")
*/
#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=n;j>i;j--)
        {
            printf("%d ",j);
        }
        for(j=1;j<i*2;j++)
        {
            printf("%d ",i);
        }
        for(j=i+1;j<n+1;j++)
        {
            printf("%d ",j);
        }
        printf("
");
    }
    for(i=1;i<n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf("%d ",j);
        }
        for(j=1;j<=(i*2-1);j++)
        {
            printf("%d ",i+1);
        }
        for(j=i+1;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("
");
    }
    
}