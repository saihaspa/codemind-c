#include<stdio.h>
int main()
{
    int x,y,num,z;
    scanf("%d",&num);
    if(num==0 || num==1)
    printf("True");
    else
    {
        x=0;
        y=1;
        z=x+y;
        while(z<num)
        {
            x=y;
            y=z;
            z=x+y;
        }
        if(z==num)
        printf("True");
        else
        printf("False");
    }
    return 0;
}