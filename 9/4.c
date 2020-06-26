#include <stdio.h>

int main() 
{
	int n;
	int i;
    int arr[50];
    int x;
    
    scanf("%d", &n);
    
    if (n == 0 || n == 1) {
		x = 0;
	} else if (n == 2) {
		x = 1;
	} else if (n == 3) {
    	x = 1;
	} else if (n == 4) {
    	x = 1;
	} else {
		arr[0] = 2;
    	arr[1] = 2;
    	arr[2] = 3;
		for (i = 3; i <= n - 5; i++) {
        	arr[i] = arr[i - 2] +arr[i - 3];
    	}
    	x = arr[n - 5];
	}
    printf("%d",x);
    
    return 0;
}