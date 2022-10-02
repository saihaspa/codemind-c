#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,f=1;
		scanf("%d",&n);
		int arr[n],t[n],s=0,l=n-1;
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		for(i=0;i<n;i++)
		{
			if(f)
			{
				t[i]=arr[l--];
			}
			else
			{
				t[i]=arr[s++];
			}
			f=!f;
		}
		for(i=0;i<n-1;i++)
		{
			printf("%d ",t[i]);
		}
		printf("%d",t[n-1]);
		printf("
");
	}
}