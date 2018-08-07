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
        printf("zero");
    
    }
    else
    {
        printf("Negative");
        
    }
    return 0;
}
