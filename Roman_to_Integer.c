#include <stdio.h>
#include <string.h>
int con(char); 
int main ()
{
   int i = 0,num = 0;
   char rN[100]; 
   scanf("%s", rN);
   while(rN[i])
   {
        if(con(rN[i])>=con(rN[i + 1]))
        {
            num=num+con(rN[i]);
        }
        else
        {
            num = num+(con(rN[i+1])-con(rN[i]));
            i++;
        }
        i++;
   }
   printf("%d
", num);
   return 0;
}
int con(char ch)
{
   int value = 0;
   switch(ch)
   {
      case 'I': value = 1; break;
      case 'V': value = 5; break;
      case 'X': value = 10; break;
      case 'L': value = 50; break;
      case 'C': value = 100; break;
      case 'D': value = 500; break;
      case 'M': value = 1000; break;
      case NULL: value = 0; break;
      default: value = -1;
   }
   return value;
}