#include<stdio.h>
int main()
{
    int a;
    printf("enter the value ");
    scanf("%d",&a);
    if(a>0)
    {
        printf(" Positive ");
    }
    else if(a==0)
    {
        printf("Zero");
    
    }
    else
    {
        printf("Negative");
        
    }
    return 0;
}
