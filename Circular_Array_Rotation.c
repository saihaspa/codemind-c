#include<stdio.h>
int  main()
{
    int n,k,t,a[100],i,p,m,j;
    scanf("%d%d%d",&n,&k,&t);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<t;j++)
    {
        scanf("%d",&p);
        while(k!=0)
        {
            m=a[n-1];
            for(i=n-2;i>=0;i--)
            {
                a[i+1]=a[i];
            }
            a[0]=m;
            k-=1;
        }
        printf("%d",a[p]);
        printf("
");
    }
}