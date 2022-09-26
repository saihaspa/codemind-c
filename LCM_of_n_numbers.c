#include<stdio.h>
int lcm(int x,int y)
{
    int gr,l;
    if(x>y)
    {
        gr=x;
    }
    else
    {
        gr=y;
    }
    while(1)
    {
        if(gr%x==0 && gr%y==0)
        {
            l=gr;
            break;
        }
        else
        {
            gr+=1;
        }
    }
    return l;
}
int main()
{
    int n,i,a[100],c=0,x,y,flcm;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    x=a[0];
    y=a[1];
    flcm=lcm(x,y);
    for(i=2;i<n;i++)
    {
        flcm=lcm(flcm,a[i]);
    }
    printf("%d",flcm);
}