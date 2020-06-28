#include <stdio.h>

int main() 
{
    int n;
	int a[51];
	
    scanf("%d", &n);

    a[2] = 1;
    a[3] = 1;
    a[1] = 0;
    if (n == 1) {
         printf("0");
    }
    if (n == 2) {
        printf("1");
    }
    if(n == 3) {
        printf("1");
    }
    
    if (n > 3) {
        int i;
        for ( i = 4; i <= n; i++) {
            a[i] = a[i - 2] + a[i - 3];
        }
        printf("%d", a[n]);
    }
    
    return 0;
}
