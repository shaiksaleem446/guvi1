#include <stdio.h>

int main()
{
    int a;
    printf("enter the value of :");
    scanf("%d",&a);
    if (a<0)
    {
        printf("Invalid");
    }
    else if(a%2==0)
    
    {
        printf("Even");
    }
    
    else
    {
        printf("Odd");
    }
    

    return 0;
}
