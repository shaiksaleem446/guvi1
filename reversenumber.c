#include <stdio.h>
#include <string.h>
 
int main()
{
   int a,b,r=0;
   printf("enter the number\n");
   scanf("%d",&a);
   while(a>0)
   {
       b=a%10;
       r=r*10+b;
       a=a/10;
   }
   printf("%d",r);
   return (0);
}
