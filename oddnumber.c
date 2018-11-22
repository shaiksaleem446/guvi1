#include <stdio.h>
#include<math.h>

int main()
{
    int i,n,m;
    printf("enter the number:");
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    
{
    if(i%2!=0)
    {
        printf("%d ",i);
    }
}

    return 0;
}
