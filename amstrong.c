#include <stdio.h>
int main()
{
    int a,r,re=0,t;
    printf("Enter the numbers:");
    scanf("%d", &a);
 t=a;
    while(a!=0)
    {
        r=a%10;
        re=re+(r*r*r);
        a=a/10;

    }
if (t==re)
{
    printf("yes");
}
else
{
    printf("no");
}
    return 0;
}
