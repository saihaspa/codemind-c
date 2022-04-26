#include<stdio.h>
#include<math.h>
int main()
{
    int p,r,t;
    double c;
    scanf("%d%d%d",&p,&r,&t);
    c=(p)*pow((1+(r/100.0)),t);
    printf("%.2lf",c);
    return 0;
}