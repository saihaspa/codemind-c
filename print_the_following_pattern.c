#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<n-1;j++)
        {
            printf("%d",j);
        }
        for(j=n-3;j>0;j--)
        {
            printf("%d",j);
        }
        printf("
");
    }
    
}