#include <stdio.h>

int main() 
{
    int n = 10;
    int m = 0;
    int numbers[10];
    int i = 0;
    int max = 0;
    int inter = 0;
   /* Reads a given number */
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    
    for (i = 0; i < n - 1; i++) {
    	max = i;
        for (m = i + 1; m < n; m++) {
            if (numbers[max] < numbers[m]) {
                max = m;
            }
        }
        
        inter = numbers[i];
        numbers[i] = numbers[max];
        numbers[max] = inter;
    }
    
    for (i = 0; i < n; i++) {
        printf("%d", numbers[i]);
        if (i != 9) {
            printf(" ");
        }
    }

    return 0;
}