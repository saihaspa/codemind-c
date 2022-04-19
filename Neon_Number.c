#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,rem,sum=0;
	scanf("%d",&n);
	x=pow(n,2);
	while(x>0)
	{
		rem=x%10;
		x=x/10;
		sum+=rem;	
	}
	if(sum==n)
	{
		printf("Neon Number");
	}
	else
	{
		printf("Not Neon Number");
	}
	return 0;
}