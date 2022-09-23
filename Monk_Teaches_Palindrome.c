#include <stdio.h>
#include <string.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        char string1[20];
        int i, length;
        int flag = 0;
        scanf("%s", string1);
        length = strlen(string1);
        for(i=0;i<length ;i++)
        {
            if(string1[i]!=string1[length-i-1])
            {
                flag=1;
                break;
            }
        }
        if (flag){
            printf("NO");
            printf("
");
        }    
        else {
            if(length%2==0)
            {
                printf("YES ");
                printf("EVEN");
                printf("
");
            }
            else
            {
                printf("YES ");
                printf("ODD");
                printf("
");
            }
        }
    }
    return 0;
}