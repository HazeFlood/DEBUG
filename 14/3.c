#include <stdio.h>

int main() 
{
    int n;
    int i;
	int j;
	
    scanf("%d", &n);
    for (i = n; i >= 1; i--) {
        for (j = i; j >= 1; j--) {
            if (i != 1) {
            	printf("%d%c", j, j == 1 ? '\n' : ' ');
			} else {
				printf("%d", j);
				if (j != 1) {
					printf(" ");
				}
			}
        }
    }
    
    return 0;
}