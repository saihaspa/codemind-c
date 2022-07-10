/*N=int(input())
t=0
min=999
for i in range(1,N+1):
    t=abs(N-(2**i))
    if(min>t):
        min=t
print(min)*/

#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,min=999,t=0,k;
    scanf("%d",&n);
    for(i=0;i<n+1;i++)
    {
        k=pow(2,i);
        t=abs(n-k);
        if(min>t)
        {
            min=t;
        }
    }
    printf("%d",min);
}