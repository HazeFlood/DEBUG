#include <stdio.h>

int main() 
{
	int num;
    int digit;
    int a;
    
    scanf("%d",&num);
    if (num < 2) {
    	return 0;
	}
    for(digit = 2;digit <= num;digit++) {
        for (a = 2;a < digit;a++) {
            if (digit % a == 0) {
                break;
            }
        }
        if (a == digit) {
        	printf("%d\n",digit);
    	}
    }
    
    return 0;
}