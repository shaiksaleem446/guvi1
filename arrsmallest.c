#include <stdio.h>
 
int main()
{
 
        int ar[50], n, i, lar;
 
        printf(" Enter the number: ");
	scanf("%d", &n);
	
     for (i = 0; i <n; i++)
		scanf("%d", &ar[i]);
		{
		    lar = ar[0];
 
        for (i = 1; i <n; i++) 
        {
		if (lar > ar[i])
			lar = ar[i];
	}
		}
        printf("%d", lar);
 
        return 0;
 
}
