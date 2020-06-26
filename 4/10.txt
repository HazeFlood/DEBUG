#include <stdio.h>

int main() 
{
    int n = 10;
    int m;
    int numbers[10];
    int i;
    int max;
    int k;
    int j;
    int o;
  /* Reads a given number */
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    
    for (j = 0; j < n - 1; j++) {
    	max = j;
        for (k = j + 1; k < n; k++) {
            if (numbers[max] < numbers[k]) {
                max = k;
            }
           
        }
        o = numbers[j];
        numbers[j] = numbers[max];
        numbers[max] = o;
    }
    
    for (int q = 0; q < n; q++) {
        if (q == 9) {
            printf("%d", numbers[q]);
        } else {
            printf("%d ", numbers[q]);
        }
    }

    return 0;
}