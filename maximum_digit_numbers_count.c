#include<stdio.h>
int main()
{
    int n,a[100],c=0,max=0,cnt,i,k,t,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        k=a[i];
        while(k!=0)
        {
            c+=1;
            k/=10;
        }
        if(max<c)
        {
            max=c;
        }
    }
    for(i=0;i<n;i++)
    {
        t=a[i];
        cnt=0;
        while(a[i]!=0)
        {
            cnt++;
            a[i]/=10;
        }
        if(max==cnt)
        {
            printf("%d ",t);
        }
    }
}