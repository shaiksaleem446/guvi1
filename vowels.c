#include <stdio.h>

int main()
{
    char a;
    printf("enter the letter of :");
    scanf("%s",&a);
    if(a=='a'|| a=='A'|| a=='e'|| a=='E'|| a=='i'|| a=='I'|| a=='o'|| a=='O'|| a=='u'|| a=='U')
    
    {
        printf("Vowels");
    }
    else
    {
        printf("Consonant");
    }
    

    return 0;
}
