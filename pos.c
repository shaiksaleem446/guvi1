#include <stdio.h>

int main()
{
    int a;
    printf("enter the value of :");
    scanf("%d",&a);
    if(a>0)
    {
        printf("Positive");
    
    }
    else if(a<0)
    {
        printf("Negative");
    }
    else if(a==0)
    {
        printf("Zero");
    }

    return 0;
}
