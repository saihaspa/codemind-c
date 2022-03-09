#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,k;
    scanf("%d",&n);
    k=sqrt(n);
    if((k*k)==n)
    {
        printf("True");
    }
    else
    printf("False");
    return 0;
}