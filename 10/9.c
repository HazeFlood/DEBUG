#include <stdio.h>

int main()
{
    int a, b, c;
    
    scanf("%d", &a);
    if (a == 2){
    	printf("2\n");
	} else {
        for (b = 2 ; b <= a ; b++) {
            for (c = 2 ; c < b ; c++) {
               if (b % c == 0) {
                  break; 
               } else if (c == (b - 1)) {
                   printf("%d\n", b);
               }
            }
        }
    }
    
    return 0;
}