#include <stdio.h>
int main()
{
    int a,n,i,b,r,re=0,t1,t2;
    printf("Enter the numbers:");
    scanf("%d%d", &a,&b);

for(i=a+1;i<=b-1;i++)
{
 t1=i;
 t2=i;
 while (t1!= 0)
        {
            t1=t1/10;
            ++n;
        }
    while(t2!=0)
    {
        r=t2%10;
        re=re+(r*r*r);
        t2=t2/10;

    }
if (i==re)
{
    printf("%d ",re);
}
n=0;
re=0;
}
    return 0;
}
