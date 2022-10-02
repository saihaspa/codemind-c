#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i;
		scanf("%d",&n);
		int arr[n],s=0,k=0;
		for(i=0;i<n-1;i++)
		{
			scanf("%d",&arr[i]);
		}
		for(i=0;i<n-1;i++)
		{
		    s+=arr[i];
		}
		k=(n*(n+1))/2;
		printf("%d",k-s);
		printf("
");
	}
}