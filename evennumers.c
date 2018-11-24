#include <stdio.h>

int main()
{
    int i,n,m;
    printf("enter the number:");
    scanf("%d%d",&n,&m);
    for(i=n+1;i<=m-1;i++)
    
{
    if(i%2==0)
    {
        printf("%d ",i);
    }
}

    return 0;
}
