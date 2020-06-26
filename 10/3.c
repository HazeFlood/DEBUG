#include <stdio.h>
#include <math.h>

int main() 
{
    int a;
    int b;
    int c;
    
    scanf("%d",&b);
    if (b == 1) {
    	return 0;
    } else if (b == 2) {
    	int x = 2;
    	printf("%d",x);
    } else if (b > 2) {
    	for (a = 3;a <= b;a = a + 1)  {
        	int count = 0;
            for (c = 2;c < a;c = c + 1) {
				if (a % c == 0) {
                    count = 1;
                    break;
                } 
        	}
            if (count == 0){
            	printf("%d\n",a);
			}
    	}
	}
	
    return 0;
}