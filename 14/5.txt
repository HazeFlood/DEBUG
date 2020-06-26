#include <stdio.h>

int main() 
{
    int n;
	int i;
	int j;
	int m;
    
    scanf ("%d" , &n);
    for (i = 1; i <= n; i++){
        for (j = 1 , m = n - i + 1; j <= (n - i + 1); j++, m--) {
            printf ("%d", m);
            if (j != (n - i + 1)) {
            	printf (" ");
			} else if (i != n) {
            	printf ("\n");
			}
        }
    }
    
    return 0;
}