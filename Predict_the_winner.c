#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,a[100],i,x=0,y=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            x=x+a[i];
        }
        else
        {
            y=y+a[i];
        }
    }
    m=abs(x-y);
    if(m%4==0)
    {
        printf("X");
    }
    else
    {
        printf("Y");
    }
}