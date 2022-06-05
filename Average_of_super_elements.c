#include<stdio.h>
int main()
{
    int n,i,a[100],j,t=1,s=0,k=0;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {t=1;
        for (j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                t++;
                a[j]=-1;
            }
        }
        if(t==a[i])
        {
            s=s+a[i];
            k++;
        }
    }
    if(k==0)
    {
        printf("-1");
    }
    else
    {
        avg=(float)s/k;
        printf("%.2f",avg);
    }
}