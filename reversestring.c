#include <stdio.h>
#include <string.h>
 
int main()
{
   char arr[100];
   int a,i=0,tem,l;
 
   printf("Enter a string to reverse\n");
   scanf("%s",&arr);
   l=strlen(arr);
   a=l-1;
   for(i=0;i<a;i++)
   {
       tem=arr[i];
       arr[i]=arr[a];
       arr[a]=tem;
       a--;
   }
   printf("%s",arr);
   
   return (0);
}
