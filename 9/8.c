#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    
    int part[50];
    int i;
    
    part[2] = 1;
    part[3] = 1;
    part[4] = 1;
    part[1] = 0;
    
    if (n <= 4) {
    	printf("%d", part[n]);
		return 0;
	}
	
    for (i = 5; i < n; i++) {
        part[i] = part[i - 2] + part[i - 3];
    }
    
    printf("%d", part[n - 2] + part[n - 3]);
    
    
    return 0;
}