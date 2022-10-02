#include<stdio.h>
int main()
{
    int n,t,a[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int t,j=0,min=999,max=0,temp,k=0;
        scanf("%d",&t);
        
        for(j=0;j<t;j++)
        {
            scanf("%d",&a[j]);
        }
        
        for(j=0;j<t-1;j++)
        {
            if(a[j]>a[j+1])
            {
                k++;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        if(k==0)
        {
            printf("0");
        }
        else
        {
            for(j=0;j<t;j++)
            {
                if(a[j]>max)
                {
                    max=a[j];
                }
            }
            for(j=0;j<t;j++)
            {
                if(a[j]<min)
                {
                    min=a[j];
                }
            } 
            
            printf("%d
",max-min);
        }
    }
}