#include <stdio.h>

int main()
{
    int a;
    printf("enter the letter :");
    scanf("%c",&a);
    if(a>='a' && a<='z' || a>='A' && a<='Z')
    {
        printf("Alphabet");
        
    }
    else
    {
        printf("No");
    }

    return 0;
}
