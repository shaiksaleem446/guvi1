#include <stdio.h>
#include<math.h>

int main()
{
    int i,n,m,a,re=0;
    printf("enter the number:");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        m=n%10;
        re=re*10+m;
        n=n/10;
    }
if(a==re)
{
    printf("yes");
}
else
printf("no");

    return 0;
}
