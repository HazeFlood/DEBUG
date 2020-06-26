#include <stdio.h>

int main() 
{
	int n;
	
    scanf("%d", &n);
    
    for (int i = n; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            if (j > 1) {
                printf("%d", j);
                printf(" ");
            } else {
                 printf("%d", j);
                 if (i != 1) {
                 	printf("\n");
				 }
            }
        }
    }

    return 0;
}