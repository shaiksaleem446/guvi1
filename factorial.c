#include <stdio.h>
int main()
{
 int fact=1,a,i;
 printf("enter the number:");
 scanf("%d",&a);
 for(i=1;i<=a;i++)
 {
     fact=fact*i;
 }
 printf("%d",fact);
    return 0;
}
