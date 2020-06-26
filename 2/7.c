#include <stdio.h>

int main(void) 
{
	
    int mtxA[10][10];
	int mtxB[10][10];
	int mtxC[10][10];
	int m, n; 
    int i, j, k;
    
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            mtxC[i][j] = 0;
        }
    }
    
    scanf("%d %d", &m, &n);
    
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mtxA[i][j]);
        }
    }
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &mtxB[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            for (k = 0; k < n; k++) {
                mtxC[i][j] += mtxA[i][k] * mtxB[k][j];
            }
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            j != m - 1 ? printf("%d ", mtxC[i][j]) : printf("%d", mtxC[i][j]);
        }
        printf("\n");
    }
    return 0;
}